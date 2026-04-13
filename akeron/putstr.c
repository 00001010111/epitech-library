/*
** EPITECH PROJECT, 2026
** putstr.c
** File description:
** Function that displays, one-by-one, the characters of a string.
*/

#include "akrlib.h"

int a_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        a_putchar(str[i]);
        i++;
    }
    return END;
}
