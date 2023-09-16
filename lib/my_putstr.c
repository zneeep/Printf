/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_putstr
*/

#include "../include/lib.h"

void my_putstr (char *str)
{
    int nb = 0;

    while (str[nb] != '\0') {
        my_putchar(str[nb]);
        nb++;
    }
}
