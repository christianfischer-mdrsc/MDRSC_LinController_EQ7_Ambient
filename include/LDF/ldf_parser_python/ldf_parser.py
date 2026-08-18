import json
import os
from ldfparser import parse_ldf_to_dict  # Falls du eine eigene lib nutzt
from parse_signals_to_struct import generate_signal_struct, generate_signal_cpp, generate_typedef_h
from parse_signals_to_serial import generate_signal_serial_cpp, generate_signal_serial_h

# === Pfade ===
ldf_path                = "include/LDF/Actuator.ldf"

ldf_file_name = os.path.basename(ldf_path)

json_output_path        = "include/LDF/ldf_output.json"
header_template_path    = "include/LDF/templates/lin_signals_template.txt"
output_header_path      = "src/lin_signals.h"
output_cpp_path         = "src/lin_signals.cpp"
template_typedefs       = "include/LDF/templates/ldf_typedefs_template.txt"
output_path_typedefs    = "src/ldf_typedefs.h"
template_ldf_h          = "inlcude/LDF/ldf_template_h.txt"

output_serial_cpp_path  = "src/signal_serial.cpp"
output_serial_h_path    = "src/signal_serial.h"

# === Ende Pfade ===



def main():
    # === LDF parsen und JSON erzeugen ===
    print(f"Parsing LDF: {ldf_path}")
    ldf_json = parse_ldf_to_dict(ldf_path)

    # Optional: JSON speichern
    with open(json_output_path, "w", encoding="utf-8") as f:
        json.dump(ldf_json, f, indent=4)

    print(f"JSON gespeichert unter {json_output_path}")

    # === C-Header generieren ===
    generate_signal_struct(
        ldf_json=ldf_json,
        header_template_path=header_template_path,
        output_header_path=output_header_path
    )

    print(f"C-Header generiert unter {output_header_path}")

    generate_signal_cpp(ldf_json, output_cpp_path)
    print(f"C++-Datei generiert unter {output_cpp_path}")


    # === Typedefs generieren ===
    generate_typedef_h(ldf_json, output_path_typedefs, template_typedefs, ldf_file_name)
    print("Generated Typedefs")

    # === Generiere Serial Kommunikation ===
    generate_signal_serial_cpp(ldf_json, output_serial_cpp_path)
    generate_signal_serial_h(ldf_json, output_serial_h_path)
    print("Generated Serial Communication")

if __name__ == "__main__":
    main()
