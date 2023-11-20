#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create a static library named liball.a from the compiled object files
ar rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up the temporary object files
rm *.o
