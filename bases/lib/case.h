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

void    bflag(va_list args);
void    cflag(va_list args);
void    iflag(va_list args);
void    oflag(va_list args);
void    pflag(va_list args);
void    sflag(va_list args);
void    Sflag(va_list args);
void    uflag(va_list args);
void    xflag(va_list args, int type);

char    *decimaltobase(unsigned int nb, int base, int type);
void    my_case(char letter, va_list args);

#endif //CASE_H
