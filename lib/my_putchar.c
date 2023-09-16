/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_putchar
*/

#include "../include/lib.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
