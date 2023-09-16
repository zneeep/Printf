/*
** EPITECH PROJECT, 2021
** lib.h
** File description:
** lib.h
** First edition:
** 10:16:39 09/11/2021
*/

#ifndef PRINTF_H
    #define PRINTF_H

    #include "case.h"

void              my_printf(char *string, ...);
void              my_putchar(char c);
int               my_strlen(char *str);
long long int     my_put_nbr(long long int nb);
void              my_putstr(char *str);
void              my_revstr(char *str);
int               my_nbr_len(long long int nbr);
void              my_oct_str(char *str);

#endif
