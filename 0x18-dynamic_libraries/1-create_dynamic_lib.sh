#!/bin/bash

# Step 1: Compile all .c files in the current directory
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c

# Step 2: Create the dynamic library from the compiled object files
gcc -shared -o liball.so *.o

# Step 3: Verify if the dynamic library was created successfully
if [ -e liball.so ] && [ "$(file liball.so)" == *"ELF 64-bit LSB"* ]; then
    echo "liball.so was created and contains all the sources in the current directory"
else
    echo "Error: liball.so was not created or does not contain all the sources in the current directory"
fi

