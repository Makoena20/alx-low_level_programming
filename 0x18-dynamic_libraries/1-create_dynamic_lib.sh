#!/bin/bash

# Compile all .c files into position-independent code and create a shared library

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c
gcc -shared -o liball.so *.o
rm *.o

