/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strcpy
*/

#include "../include/lib.h"

char *my_strcpy(char *dest, char const *src)
{
    char * tem = dest;
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return dest;
}
