/*
** EPITECH PROJECT, 2021
** printf
** File description:
** my_printf
*/

#include "../include/lib.h"
#include "../include/case.h"
#include <stdarg.h>

void my_printf(char *string, ...)
{
    va_list arguments;
    va_start(arguments, string);

    int i = 0;
    char actual = string[i];

    while (string[i] != '\0') {
        if (string[i] != '%') {
            my_putchar(string[i]);
            i++;
        }
        else {
            my_case(string[++i], arguments);
            i++;
        }
    }
    va_end(arguments);
}
