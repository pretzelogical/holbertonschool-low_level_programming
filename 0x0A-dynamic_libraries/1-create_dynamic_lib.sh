#!/bin/bash
# Creates a dynamic library called liball.so from all the c
# files in the current directory
gcc -Wall -pedantic -Werror -Wextra -shared -fPIC *.c -o liball.so
