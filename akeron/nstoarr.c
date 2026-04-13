/*
** EPITECH PROJECT, 2026
** minishell
** File description:
** minishell main
*/
#include <stdlib.h>
#include <string.h>

char **nstoarr(char *str, char *delim)
{
    int i = 0;
    char **result = malloc(sizeof(char*) * 64);
    char *token;

    if (!result)
        return NULL;
    token = strtok(str, delim);
    while (token && i < 63) {
        result[i] = token;
        i++;
        token = strtok(NULL, delim);
    }
    result[i] = NULL;
    return result;
}
