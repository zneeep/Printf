/*
** EPITECH PROJECT, 2021
** specifiers.h
** File description:
** specifiers.h
** First edition:
** 10:56:46 09/11/2021
*/

#ifndef CASE_H
    #define CASE_H

    #include <stdarg.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdint.h>

void    bflag(va_list arguments);
void    cflag(va_list arguments);
void    iflag(va_list arguments);
void    oflag(va_list arguments);
void    pflag(va_list arguments);
void    sflag(va_list arguments);
void    s_up_flag(va_list arguments);
void    uflag(va_list arguments);
void    xflag(va_list arguments);
void    x_up_flag(va_list arguments);
void    dflag(va_list arguments);

char    *decimaltobase(long long int nbr, int base, char caseten);
void    my_case(char letter, va_list arguments);

#endif
