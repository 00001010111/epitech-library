/*
** EPITECH PROJECT, 2026
** putchar.c
** File description:
** Function displaying alphabet in ascending order on a single line.
*/
#include <unistd.h>

void a_putchar(char c)
{
    write(1, &c, 1);
}
