/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_is_prime
*/

#include "../include/lib.h"

int my_is_prime(int nb)
{
    int divider = 3;

    if (nb == 1 || nb <= 0) {
        return 0;
    }
    if (divider < nb) {
        if (nb % divider == 0 || nb % 2 == 0) {
            return 0;
        }
        divider = divider + 2;
    }
    else if (divider == nb) {
        return 1;
    }
}
