/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** says if a number is positive or negative
*/

#include "../include/lib.h"

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    }
    else if ( n >= 0) {
        my_putchar('P');
    }
    my_putchar('\n');
    return 0;
}
