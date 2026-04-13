/*
** EPITECH PROJECT, 2026
** arrlen.c
** File description:
** array length utility
*/

#include "akrlib.h"

int arrlen(char **arr)
{
    int i = 0;

    if (!arr)
        return ERROR;
    while (arr[i] != NULL) {
        i++;
    }
    return i;
}
