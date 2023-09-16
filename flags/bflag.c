/*
** EPITECH PROJECT, 2021
** printf
** File description:
** bflag
*/

#include <stdarg.h>
#include "../include/case.h"
#include "../include/lib.h"

void bflag(va_list arguments)
{
    long long int i = va_arg(arguments, long long int);

    decimaltobase(i, 2, 'a');
}
