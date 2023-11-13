#!/usr/bin/python3

import sys

if len(sys.argv) < 2:
    print("Script needs at least one argument")
    sys.exit(1)

for filename in sys.argv[1:]:
    cpp_filename = filename + '.cpp'
    with open(cpp_filename, 'w') as cpp_file:
        pass
    hpp_filename = filename + '.hpp'
    with open(hpp_filename, 'w') as hpp_file:
        pass