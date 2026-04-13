/*
** EPITECH PROJECT, 2026
** cleanstr.c
** File description:
** clean str function to format user input and remove extra spaces
*/

void cleanstr(char *str)
{
    int i = 0;
    int j = 0;
    int sp = 1;

    while (str && str[i] && str[i] != '\n') {
        if (str[i] != ' ' && str[i] != '\t') {
            str[j] = str[i];
            j++;
            sp = 0;
        }
        if ((str[i] == ' ' || str[i] == '\t') && sp == 0) {
            str[j] = ' ';
            j++;
            sp = 1;
        }
        i++;
    }
    if (j > 0 && str[j - 1] == ' ')
        j--;
    str[j] = '\0';
}
