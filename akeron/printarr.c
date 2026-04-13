/*
** EPITECH PROJECT, 2026
** printarr.c
** File description:
** print array
*/

#include "akrlib.h"

void printarr(char **__arr)
{
    for (int i = 0; __arr[i]; i++) {
        a_putchar('[');
        a_putnbr(i);
        a_putstr("] ");
        a_putstr(__arr[i]);
        a_putchar('\n');
    }
}
