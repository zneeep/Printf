/*
** EPITECH PROJECT, 2021
** printf
** File description:
** decimaltobase
*/

#include <stdlib.h>
#include "../include/lib.h"
#include "../include/case.h"

char value(int nbr, char caseten)
{
    if (nbr >= 0 && nbr <= 9) {
        return (char)(nbr) + '0';
    }
    else if (nbr > 9) {
        return (char)(nbr - 10 + caseten);
    }
}

char *decimaltobase(long long int nbr, int base, char caseten)
{
    int rank = 0;
    char *result = malloc(sizeof(char) * 255);

    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }

    while (nbr != 0) {
        result[rank] = value(nbr % base, caseten);
        nbr = nbr / base;
        rank++;
    }
    result[rank++] = 0;
    my_revstr(result);
    my_putstr(result);
    free(result);
    return result;
}
