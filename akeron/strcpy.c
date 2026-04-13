/*
** EPITECH PROJECT, 2026
** a_strcpy.c
** File description:
** Function that copies a string into another.
*/

char *a_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
