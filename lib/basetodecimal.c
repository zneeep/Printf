/*
** EPITECH PROJECT, 2021
** printf
** File description:
** octal
*/

#include <stdio.h>
#include "../include/lib.h"

int rank (char *base, long long int number)
{
    int rank = 0;

    while ((base[rank] - 48) != (number % 10)) {
        rank++;
    }
    return rank;
}

long long int power(long long int number, int power)
{
    if (number < 0 && power % 2 == 1) {
        my_putchar('-');
        number = -number;
    }
    unsigned long int fixvalue = number;

    if (power == 0) {
        return 1;
    }
    if (power == 1) {
        return number;
    }
    while (power > 1) {
        number = fixvalue * number;
        power--;
    }
    return number;
}

long long int base(char *base, long long number)
{

    long long int fnv = 0;
    int lennbr = my_nbr_len(number);
    int lenbase = my_strlen(base);

    while (number / 10 != 0) {
        for (int i = lennbr; i > 0; i--) {
            fnv += (power(lenbase, (lennbr - i)) * rank(base, number));
            number = number / 10;
        }
    }
    return fnv;
}
