#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
arr -rc liball.c *.0
ranlib liball.a	
