/*
** EPITECH PROJECT, 2021
** printf
** File description:
** my_case
*/

#include <stdarg.h>
#include "../include/case.h"
#include "../include/lib.h"

void my_other_case(char flag, va_list arguments)
{
    switch (flag) {
        case 's' :
            sflag(arguments);
            break;
        case 'S' :
            s_up_flag(arguments);
            break;
        case '%' :
            my_putchar('%');
            break;
        case 'b' :
            bflag(arguments);
            break;
        case 'p' :
            pflag(arguments);
            break;
        case 'c' :
            cflag(arguments);
            break;
    }
}

void my_case(char flag, va_list arguments)
{
    switch (flag) {
        case 'd' :
        case 'i' :
            dflag(arguments);
            break;
        case 'o' :
            oflag(arguments);
            break;
        case 'u' :
            uflag(arguments);
            break;
        case 'x' :
            xflag(arguments);
            break;
        case 'X' :
            x_up_flag(arguments);
            break;
        default:
            my_other_case(flag, arguments);
            break;
    }
}
