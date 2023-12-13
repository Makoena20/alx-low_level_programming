#!/bin/bash

# Compile each source file and create corresponding object files
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library using all the object files
ar -rcs liball.a *.o

# Clean up: remove the temporary object files
rm -f *.o

