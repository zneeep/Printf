/*
** EPITECH PROJECT, 2021
** printf
** File description:
** Xflag
*/

#include <stdarg.h>
#include "../include/case.h"
#include "../include/lib.h"

void x_up_flag(va_list arguments)
{
    long long int i = va_arg(arguments, long long int);

    decimaltobase(i, 16, 'A');
}
