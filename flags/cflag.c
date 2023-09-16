/*
** EPITECH PROJECT, 2021
** cflag
** File description:
** cflag
*/

#include <stdarg.h>
#include "../include/case.h"
#include "../include/lib.h"

void cflag(va_list arguments)
{
    char toprint = va_arg(arguments, int);

    my_putchar(toprint);
}
