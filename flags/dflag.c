/*
** EPITECH PROJECT, 2021
** printf
** File description:
** dlfag
*/

#include <stdarg.h>
#include "../include/case.h"
#include "../include/lib.h"

void dflag(va_list arguments)
{
    int i = va_arg(arguments, int);

    my_put_nbr(i);
}
