/*
** EPITECH PROJECT, 2021
** printf
** File description:
** Sflag
*/

#include <stdarg.h>
#include "../include/lib.h"

void s_up_flag(va_list arguments)
{
    my_oct_str(va_arg(arguments, char *));
}
