/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_put_nbr
*/

#include "../include/lib.h"

long long int my_put_nbr(long long int nb)
{
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    }
    else if (nb >= 0 && nb < 10) {
        my_putchar('0' + nb);
    }
    else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return 0;
}
