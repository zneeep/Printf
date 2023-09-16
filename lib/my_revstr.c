/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_revstr
*/

#include "../include/lib.h"

void my_revstr(char *str)
{
    int len = my_strlen(str);
    int i = 0;

    while (i < len / 2) {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
        i++;
    }
}
