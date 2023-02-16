#!/usr/bin/env bash
# This script will create a static library called liball.a
# from all the .c files that are in the current folder
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar rc liball.a *.o
