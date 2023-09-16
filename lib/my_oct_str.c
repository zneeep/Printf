/*
** EPITECH PROJECT, 2021
** printf
** File description:
** np_my_putstr
*/

#include "../include/lib.h"
#include "../include/case.h"

void my_oct_str_cond(char *str, int i)
{
    int a = 0;

    if (str[i] < 32 || str[i] >= 127) {
        a = my_nbr_len((int)(str[i]));
        my_putchar('\\');
        while (3 - a > 0) {
            my_putchar('0');
            a++;
        }
        decimaltobase((int)(str[i]), 8, 'a');
        }
    else {
        my_putchar(str[i]);
    }
}

void my_oct_str(char *str)
{

    for (int i = 0; str[i] != 0; i++) {
        my_oct_str_cond(str, i);
    }
}
