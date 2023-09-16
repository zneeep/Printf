/*
** EPITECH PROJECT, 2021
** printf
** File description:
** sflag
*/

#include <stdarg.h>
#include "../include/case.h"
#include "../include/lib.h"

void sflag(va_list arguments)
{
    char *string = va_arg(arguments, char *);

    my_putstr(string);
}
