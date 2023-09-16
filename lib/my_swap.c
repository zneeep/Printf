/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** swap two values
*/

#include "../include/lib.h"

void my_swap (int *a, int *b)
{
    int buff = 0;
    buff = *a;
    *a = *b;
    *b = buff;
    my_putchar(48 + *a);
    my_putchar(48 + *b);
    my_putchar('\n');
}
