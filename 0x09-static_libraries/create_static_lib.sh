#!/bin/bash
gcc -c *.c
ar rc libmy.a *.o
ranlib libmy.a
ar -t libmy.a
