/*
** EPITECH PROJECT, 2026
** seekenv.c
** File description:
** cd builtin with hyphen and env updates
*/

#include "akrlib.h"

char *seekenv(char **env, char *key)
{
    int len = a_strlen(key);

    for (int i = 0; env[i]; i++) {
        if (a_strncmp(env[i], key, len) == 0 && env[i][len] == '=')
            return &env[i][len + 1];
    }
    return NULL;
}
