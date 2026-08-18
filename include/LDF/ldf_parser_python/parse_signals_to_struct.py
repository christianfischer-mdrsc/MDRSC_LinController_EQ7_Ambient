def generate_signal_struct(ldf_json, header_template_path, output_header_path):
    signals = ldf_json.get("signals", [])
    frames = ldf_json.get("frames", [])
    diag_signals = ldf_json.get("diagnostic_signals", [])
    schedule_tables = ldf_json.get("schedule_tables", [])

    def map_width_to_type(width):
        if width == 1:
            return "bool"
        elif width <= 8:
            return "uint8_t"
        elif width <= 16:
            return "uint16_t"
        elif width <= 32:
            return "uint32_t"
        elif width <= 64:
            return "uint64_t"
        else:
            raise ValueError(f"Unsupported signal width: {width}")

    # === Template laden ===
    with open(header_template_path, "r", encoding="utf-8") as f:
        header_template = f.read()

    # === Header-Datei erzeugen ===
    with open(output_header_path, "w", encoding="utf-8") as h:
        h.write(header_template.strip() + "\n\n")

        #defines erzeugen
        h.write(f"#define LIN_BAUDRATE {ldf_json.get('speed')}\n")
        h.write(f"#define LIN_PROTOCOL_VERSION {ldf_json.get('protocol_version')}\n")
        h.write(f"#define LIN_LANGUAGE_VERSION {ldf_json.get('language_version')}\n\n")

        # === declaration ===
        for frame in frames:
            h.write(f"extern LinFrame_t {frame['name']}_t;\n")
            h.write(f"void {frame['name']}_CB(LinFrame_t* frame);\n")
        h.write("\n")


        # Struct erzeugen
        h.write("typedef struct signals{\n")
        for signal in signals:
            name = signal["name"]
            width = signal.get("width", 8)
            #c_type = map_width_to_type(width)
            #h.write(f"    {c_type} {name};\n")
            h.write(f"    LinSignalParameter_t {name};\n")
        h.write("} LinSignals_t;\n\n")

        h.write("extern LinSignals_t signals;\n\n")

        #Diagnostic Signals
        h.write("typedef struct LinDiagnosticSignals{\n")
        for diag_signal in diag_signals:
            name = diag_signal["name"]
            width = diag_signal["width"]
            c_type = map_width_to_type(width)
            h.write(f"    {c_type} {name};\n")
        h.write("} LinDiagnosticSignals_t;\n\n")

        h.write("extern LinDiagnosticSignals_t LinDiagnosticSignal;\n\n")

        for schedule_table in schedule_tables:
            name = schedule_table["name"]
            entries = schedule_table["schedule"]
 
            # Unterscheiden zwischen normalen und Diag Tabellen
            if name.startswith("Diag"):
                typename = "LinScheduleTableDiag"
            else:
                typename = "LinScheduleTable"

            # Array-Header mit Länge
            h.write(f"extern {typename} {name}_table[{len(entries)}];\n")
        

        # Header-Ende
        h.write("#endif // LIN_SIGNALS_H\n")

def generate_signal_cpp(ldf_json, output_cpp_path):
    signals = ldf_json.get("signals", [])
    frames = ldf_json.get("frames", [])
    nodes = ldf_json.get("nodes", [])
    schedule_tables = ldf_json.get("schedule_tables", [])

    # Map: signal_name -> offset
    offsets = {}
    publisher = {}
    for frame in frames:
        for sig in frame.get("signals", []):
            offsets[sig["signal"]] = sig.get("offset", 0)
            publisher[sig["signal"]] = frame.get("publisher", "unknown")

    with open(output_cpp_path, "w", encoding="utf-8") as cpp:
        cpp.write('#include "lin_signals.h"\n\n')
        cpp.write("LinSignals_t signals = {\n")

        for signal in signals:
            name = signal["name"]
            init = signal.get("init_value", 0)
            width = signal.get("width", 8)
            offset = offsets.get(name, 0)   # default 0, falls nicht gefunden
            publish = publisher.get(name, 0)

            cpp.write(f"    .{name} = {{\n")
            cpp.write(f"        .data = {init},\n")
            cpp.write(f"        .length = {width},\n")
            cpp.write(f"        .offset = {offset},\n")
            cpp.write(f"        .publisher = {publish}\n")
            cpp.write("    },\n")

        cpp.write("};\n\n")

        for frame in frames:
            if(nodes['master']['name'] == frame.get("publisher")):
                cpp.write(f"void {frame['name']}_CB(LinFrame_t* frame) {{\n")
                cpp.write("    uint64_t buf = 0;\n")
                for signal in frame['signals']:   # <-- nur Signale dieses Frames
                    cpp.write(f"    buf |= ((uint64_t)signals.{signal['signal']}.data << {signal['signal'].upper()}_OFFSET);\n")
                
                cpp.write("    for(int i = 0; i < 8; i++) {\n")
                cpp.write("        frame->u8_dataptr[i] = (buf >> (i * 8)) & 0xFF;\n")
                cpp.write("    }\n")
                cpp.write("}\n\n")
            else:
                cpp.write(f"void {frame['name']}_CB(LinFrame_t* frame) {{\n")
                cpp.write("    uint64_t buf = 0;\n")
                cpp.write("    for(int i = 0; i < 8; i++) {\n")
                cpp.write("        buf |= ((uint64_t)frame->u8_dataptr[i]) << (i * 8);\n")
                cpp.write("    }\n")
                for signal in frame['signals']:   # <-- nur Signale dieses Frames
                    cpp.write(f"    signals.{signal['signal']}.data = (buf >> {signal['signal'].upper()}_OFFSET) & ((1ULL << {signal['signal'].upper()}_LENGTH) - 1);\n")
                cpp.write("}\n\n")

        for frame in frames:
            cpp.write(f"LinFrame_t {frame['name']}_t = {{\n")
            cpp.write(f"    .u8_idField = {frame['frame_id']},\n")
            cpp.write(f"    .u8_dataptr = {{0}},\n")
            cpp.write(f"    .u8_checkSum = 0,\n")
            cpp.write(f"    .fn_frameIndex = {frame['name']},\n")
            cpp.write(f"    .callback = {frame['name']}_CB\n")
            cpp.write("};\n\n")
                      
        #
        #LinScheduleTable ACT_ScheduleTable[2] = {
        #   {ACT_Master_Control, 40},
        #   {ACT_Slave_Status, 40}
        #};
        for schedule_table in schedule_tables:
            name = schedule_table["name"]
            entries = schedule_table["schedule"]

            # Unterscheiden zwischen normalen und Diag Tabellen
            if name.startswith("Diag"):
                typename = "LinScheduleTableDiag"
            else:
                typename = "LinScheduleTable"

            # Array-Header mit Länge
            cpp.write(f"{typename} {name}_table[{len(entries)}] = {{\n")

            # Alle Einträge schreiben
            for entry in entries:
                cmd = entry["command"]
                delay_ms = int(entry["delay"] * 1000)  # Sekunden → Millisekunden

                if cmd["type"] == "frame":
                    frame = cmd["frame"]
                    cpp.write(f"    {{{frame}, {frame}_t, {delay_ms}}},\n")
                elif cmd["type"] == "master_request":
                    cpp.write(f"    {{MasterReq, {delay_ms}}},\n")
                elif cmd["type"] == "slave_response":
                    cpp.write(f"    {{SlaveResp, {delay_ms}}},\n")

            cpp.write("};\n\n")
        
def generate_typedef_h(ldf_json, output_typedefs_path, template_path, ldf_filename):
    nodes = ldf_json.get("nodes")
    signals = ldf_json.get("signals", [])
    diagnostic_signals = ldf_json.get("diagnostic_signals", [])
    frames = ldf_json.get("frames", [])
    diagnostic_frames = ldf_json.get("diagnostic_frames", [])
    schedule_tables = ldf_json.get("schedule_tables", [])

    # === Template laden ===
    with open(template_path, "r", encoding="utf-8") as f:
        template = f.read()
    
    with open(output_typedefs_path, "w", encoding="utf-8") as h:
        h.write(template.strip() + "\n\n")

        h.write(f'#define LDF_VERSION "{ldf_filename}"\n\n')
        # === generate width definitions ===
        h.write("/* Definitions for Signal Length */\n")
        for signal in signals:
            sig_name_upper = signal['name'].upper()
            h.write(f"#define {sig_name_upper}_LENGTH {signal['width']}\n")
        h.write("\n\n")
        # === generate offset definitions ===
        h.write("/* Definitions for Signal Offset */\n")
        for frame in frames:
            for signal in frame['signals']:
                sig_name_upper = signal['signal'].upper()
                h.write(f"#define {sig_name_upper}_OFFSET {signal['offset']}\n")
            h.write("\n")

        for schedule_table in schedule_tables:
            name = schedule_table["name"]
            entries = schedule_table["schedule"]
            h.write(f"#define {name.upper()}_FRAMESIZE {len(entries)}\n")
        h.write("\n")

        # === generate nodes ===
        h.write("// LIN-Bus Nodes\n")
        h.write("typedef enum {\n")
        h.write(f"    {nodes['master']['name']}")
        for slave_node in nodes["slaves"]:
            h.write(",\n")
            h.write(f"    {slave_node}")
        h.write("\n} Nodes;\n\n")

        # === generate signals ===
        h.write("// LIN-Bus Signals\n")
        h.write("typedef enum {\n")
        for i, signal in enumerate(signals):
            is_last = (i == len(signals) - 1)
            comma = "" if is_last else ","
            h.write(f"    {signal['name']}{comma}\n")
        h.write("} SignalNames;\n\n")

        # === generate diagnostic signals ===
        h.write("// LIN-Bus Diagnostic Signals\n")
        h.write("typedef enum {\n")
        for i, diagnostic_signal in enumerate(diagnostic_signals):
            is_last = (i == len(diagnostic_signals) - 1)
            comma = "" if is_last else ","
            h.write(f"    {diagnostic_signal['name']}{comma}\n")
        h.write("} DiagnosticSignalNames;\n\n")

        # === generate frames ===
        h.write("// LIN-Bus Frames\n")
        h.write("typedef enum {\n")
        for i, frame in enumerate(frames):
            is_last = (i == len(frames) - 1)
            comma = "" if is_last else ","
            h.write(f"    {frame['name']}{comma}\n")
        h.write("} FrameNames;\n\n")

        # === generate Diagnostic Frames ===
        h.write("// LIN-Bus Diagnostic Frames\n")
        h.write("typedef enum {\n")
        for i, diagnostic_frame in enumerate(diagnostic_frames):
            is_last = (i == len(diagnostic_frames) - 1)
            comma = "" if is_last else ","
            h.write(f"    {diagnostic_frame['name']}{comma}\n")
        h.write("} DiagnosticFrameNames;\n\n")


        # == generate FrameTypes ===
        h.write("//LIN-Bus Frametypes\n")
        h.write("typedef enum {\n")
        h.write("    NormalFrame,\n    DiagnosticFrame,\n    EndFrame\n")
        h.write("} FrameTypes;\n\n")

        # === generate Schedules ===
        h.write("// LIN-Bus Schedule Tables\n")
        h.write("typedef enum {\n")
        for i, schedule_table in enumerate(schedule_tables):
            is_last = (i == len(schedule_tables) - 1)
            comma = "" if is_last else ","
            h.write(f"    {schedule_table['name']}{comma}\n")
        h.write("} ScheduleNames;\n\n")

        # === END FILE ===
        h.write("#endif //LDF_TYPEDEFS_H")

def generate_frame_structure(ldf_json, output_path, template_path):
    print("Start generating FrameStruct")

    # === Template laden ===
    with open(template_path, "r", encoding="utf-8") as f:
        template = f.read()

    # === Datei erzeugen ===
    with open(output_path, "w", encoding="utf-8") as h:
        h.write(template.strip() + "\n\n")

        # === Start generate ===

        # === LIN Signal Field === 

        # === LIN Diagnostic Signal Field === 

        # === LIN Frame Field === 

        # === LIN Diagnostic Signal Field === 

        # === LIN Node Attributes === 

        # === LIN Schedule Field === 