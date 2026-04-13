/*
** EPITECH PROJECT, 2026
** a_strlen.c
** File description:
** My string len.
*/

int a_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
