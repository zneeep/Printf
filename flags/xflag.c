/*
** EPITECH PROJECT, 2021
** printf
** File description:
** xflag
*/

#include <stdarg.h>
#include "../include/case.h"
#include "../include/lib.h"

void xflag(va_list arguments)
{
    long long int i = va_arg(arguments, long long int);

    decimaltobase(i, 16, 'a');
}
