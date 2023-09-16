/*
** EPITECH PROJECT, 2021
** printf
** File description:
** oflag
*/

#include <stdarg.h>
#include "../include/case.h"
#include "../include/lib.h"

void oflag(va_list arguments)
{
    long long int i = va_arg(arguments, long long int);

    decimaltobase(i, 8, 'a');
}
