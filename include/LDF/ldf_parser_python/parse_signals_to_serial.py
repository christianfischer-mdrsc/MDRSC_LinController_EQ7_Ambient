# signale sollen in einer funktion, welche durch seriellen port aufgerufen wird bearbeitet werden
# z.b. serieller eingang = x
# x = "set:signal [value]"
# oder
# x = "get:signal"

#nun sollen alle signale aus signals in eine cpp geladen werden
# die funktion sieht so aus
# operate_signals(string x);

# === GENERATING CPP FUNCTIONS ===
def generate_signal_serial_cpp(ldf_json, output_cpp_path):
    signals = ldf_json.get("signals", [])
    with open(output_cpp_path, "w", encoding="utf-8") as cpp:
        cpp.write('#include "signal_serial.h"\n')
        cpp.write('#include <stdlib.h>\n')  # für strtol
        cpp.write('\n')
        cpp.write("void operateSerialSignal(String input, LinSignals_t *mySignal) {\n")
        cpp.write("    if (input == \"signals?\") {\n")
        cpp.write("        Serial.println(\"Available signals:\");\n")
        # === signal Helper === 
        for signal in signals:
            cpp.write(f"        Serial.println(\"{signal['name']}\");\n")
        cpp.write("        return;\n")
        cpp.write("    }\n")

        cpp.write("    if(input.startsWith(\"set:\")) {\n")
        cpp.write("        input = input.substring(4);\n")

        for i, signal in enumerate(signals):
            signal_name = signal["name"]
            if_stmt = "if" if i == 0 else "else if"
            cpp.write(f"        {if_stmt}(input.startsWith(\"{signal_name}\")) {{\n")
            cpp.write(f"            int value = strtol(input.substring({len(signal_name)} + 1).c_str(), NULL, 0);\n")
            cpp.write(f"            mySignal->{signal_name}.data = value;\n")
            cpp.write(f'            Serial.printf("New Value for {signal_name} = %d", value);\n')
            cpp.write(f'            Serial.println();\n')
            cpp.write("        }\n")

        cpp.write("    } else if(input.startsWith(\"get:\")) {\n")
        cpp.write("        input = input.substring(4);\n")

        for i, signal in enumerate(signals):
            signal_name = signal["name"]
            if_stmt = "if" if i == 0 else "else if"
            cpp.write(f"        {if_stmt}(input.startsWith(\"{signal_name}\")) {{\n")
            cpp.write(f'            Serial.print("{signal_name}: ");\n')
            cpp.write(f"            Serial.println(mySignal->{signal_name}.data);\n")
            cpp.write("        }\n")

        # === 

        cpp.write("    }\n")  # End of else-if
        cpp.write("}\n")      # End of function





# === GENERATING HEADER FILE ===
def generate_signal_serial_h(ldf_json, output_h_path):
    with open(output_h_path, "w", encoding="utf-8") as h:
        # === HEADER ===
        h.write("#ifndef SIGNAL_SERIAL_H\n#define SIGNAL_SERIAL_H\n\n")
        # == INCLUDES
        h.write('#include <Arduino.h>\n')
        h.write('#include "lin_signals.h"\n')
        h.write("\n")

        # === FUNCTIONS ===
        h.write("void operateSerialSignal(String input, LinSignals_t *mySignal);\n")
        h.write("\n")

        # === ENDIF ===
        h.write("#endif")

    

