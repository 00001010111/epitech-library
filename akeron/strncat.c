/*
** EPITECH PROJECT, 2026
** a_strncat.c
** File description:
** concatenate two strings
*/
#include "akrlib.h"

char *a_strncat(char *dest, char const *src, int nb)
{
    int size1 = a_strlen(dest);

    for (int i = 0; i < size1; i++)
        a_putchar(dest[i]);
    for (int r = 0; r < nb; r++)
        a_putchar(src[r]);
    return 0;
}
