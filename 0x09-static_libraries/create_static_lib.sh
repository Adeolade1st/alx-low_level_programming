#!/bin/bash
gcc -c -Wall -Wextra -pedantic *.c
ar -rc liball.a *.o
ranlib liball.a
ar -t liball.a
