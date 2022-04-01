#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.c *.0
ranlib liball.a	
