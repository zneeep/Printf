/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strlen
*/

#include "../include/lib.h"

int my_strlen (char *str)
{
    int i;
    for (i = 0 ; str[i] != '\0';) {
        i++;
    }
    return i;
}
