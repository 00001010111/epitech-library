/*
** EPITECH PROJECT, 2026
** freearr.c
** File description:
** free array
*/

#include "akrlib.h"

void freearr(char **array)
{
    if (!array)
        return;
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
