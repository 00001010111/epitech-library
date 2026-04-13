/*
** EPITECH PROJECT, 2024
** amazed
** File description:
** vectorword_array
*/

#include <stdlib.h>

static int is_delim(char c)
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\0');
}

static int count_words(char const *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_delim(str[i]) && is_delim(str[i + 1]))
            count++;
    }
    return count;
}

static char *get_word(char const *str)
{
    int len = 0;
    char *word;

    while (str[len] != '\0' && !is_delim(str[len]))
        len++;
    word = malloc(sizeof(char) * (len + 1));
    if (!word)
        return NULL;
    for (int i = 0; i < len; i++)
        word[i] = str[i];
    word[len] = '\0';
    return word;
}

static void *freearr(char **array, int j)
{
    for (int i = 0; i < j; i++)
        free(array[i]);
    free(array);
    return NULL;
}

char **stoarr(char const *str)
{
    int words = count_words(str);
    char **array = malloc(sizeof(char *) * (words + 1));
    int j = 0;

    if (str == NULL || array == NULL)
        return NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_delim(str[i]))
            continue;
        array[j] = get_word(&str[i]);
        if (!array[j])
            return freearr(array, j);
        j++;
        while (str[i] != '\0' && !is_delim(str[i]))
            i++;
        if (str[i] == '\0')
            break;
    }
    array[j] = NULL;
    return array;
}
