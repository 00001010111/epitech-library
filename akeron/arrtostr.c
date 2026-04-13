/*
** EPITECH PROJECT, 2026
** arrtostr.c
** File description:
** merge element of an array to a string
*/

#include <stdlib.h>
#include <string.h>

static size_t get_total_len(char **arr, int start)
{
    size_t len = 0;

    for (int i = start; arr[i]; i++) {
        len += strlen(arr[i]);
        if (arr[i + 1])
            len += 1;
    }
    return (len);
}

char *arrtostr_n(char **arr, int start_index)
{
    int n = 0;
    size_t total_len = 0;
    char *result = NULL;

    while (arr[n])
        n++;
    if (start_index >= n || start_index < 0)
        return (NULL);
    total_len = get_total_len(arr, start_index);
    result = malloc(sizeof(char) * (total_len + 1));
    if (!result)
        return (NULL);
    result[0] = '\0';
    for (int i = start_index; arr[i]; i++) {
        strcat(result, arr[i]);
        if (arr[i + 1])
            strcat(result, " ");
    }
    return (result);
}
