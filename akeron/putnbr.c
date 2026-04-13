/*
** EPITECH PROJECT, 2026
** a_putnbr.c
** File description:
** display a numer.
*/
#include "akrlib.h"

int a_putnbr(int nb)
{
    if (nb == -2147483648) {
        a_putchar('-');
        a_putchar('2');
        a_putnbr(147483648);
        return END;
    }
    if (nb < 0) {
        a_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        a_putnbr(nb / 10);
    }
    a_putchar((nb % 10) + '0');
    return 0;
}
