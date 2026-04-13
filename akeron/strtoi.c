/*
** EPITECH PROJECT, 2026
** strtoi.c
** File description:
** turns a string that contain numbers into an int.
*/

int is_negative(char const *str, int result)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] == '-') {
            result = result * -1;
        }
    }
    return result;
}

int strtoi(char const *str)
{
    int result = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '-' || str[i] == '+')
            continue;
        if ((str[i] >= '0' && str[i] <= '9')) {
            result = result * 10 + ((str[i] - '0') % 10);
        } else {
            break;
        }
    }
    result = is_negative(str, result);
    return result;
}
