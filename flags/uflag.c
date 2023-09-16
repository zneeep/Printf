/*
** EPITECH PROJECT, 2021
** printf
** File description:
** uflag
*/

#include <stdarg.h>
#include "../include/lib.h"

void uflag(va_list arguments)
{
    unsigned int i = va_arg(arguments, unsigned int);

    my_put_nbr(i);
}
