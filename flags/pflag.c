/*
** EPITECH PROJECT, 2021
** printf
** File description:
** pflag
*/

#include <stdio.h>
#include <stdarg.h>
#include "../include/lib.h"

void pflag(va_list arguments)
{
    long long int ptr = va_arg(arguments, long long int);
    my_putstr("0x");
    decimaltobase(ptr, 16, 'a');
}
