/*
** EPITECH PROJECT, 2026
** strjoin.c
** File description:
** concatenate two strings
*/

#include <stdlib.h>
#include "akrlib.h"

char *a_strjoin(const char *s1, const char *s2)
{
    int len1 = (s1) ? a_strlen(s1) : 0;
    int len2 = (s2) ? a_strlen(s2) : 0;
    char *res = malloc(sizeof(char) * (len1 + len2 + 1));

    if (!res)
        return NULL;
    if (s1)
        a_strcpy(res, s1);
    if (s2)
        a_strcpy(res + len1, s2);
    res[len1 + len2] = '\0';
    return res;
}
