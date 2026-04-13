/*
** EPITECH PROJECT, 2026
** a_strcat.c
** File description:
** my str concatenate
*/

#include "akrlib.h"

char *a_strcat(char const *dest, char const *src)
{
    int size1 = a_strlen(dest);
    int size2 = a_strlen(src);
    char *result = malloc(sizeof(char) * (size1 + size2 + 1));

    if (!result)
        return NULL;
    for (int i = 0; i < size1; i++)
        result[i] = dest[i];
    for (int j = 0; j < size2; j++)
        result[size1 + j] = src[j];
    result[size1 + size2] = '\0';
    return result;
}
