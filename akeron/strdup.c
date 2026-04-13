/*
** EPITECH PROJECT, 2026
** a_strdup.c
** File description:
** Function that allocates memory and copies the string given as argument in it.
*/
#include "akrlib.h"

char *a_strdup(char const *src)
{
    char *saved;
    int lens = a_strlen(src);
    int i = 0;

    saved = malloc(sizeof(char) * (lens + 1));
    for (i = 0; i < lens; i++)
        saved[i] = src[i];
    saved[i] = '\0';
    return saved;
}
