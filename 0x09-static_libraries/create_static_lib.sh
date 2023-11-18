#!/bin/bash

# Create a static library from all .c files in the current directory

# Compile each .c file into a .o file
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library liball.a from the compiled .o files
ar -rc liball.a *.o

# Clean up the temporary .o files
rm *.o
