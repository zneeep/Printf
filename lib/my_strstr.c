/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** my_strstr
*/

#include "../include/lib.h"

char *my_str_str_cond(char *str, char *to_find, int i, int c)
{
    int j = my_strlen(to_find);

    while (str[i] != to_find[c]) {
        i++;
    }
    if (str[i] == to_find[c] && to_find[c] != 0) {
        while (str[i] == to_find[c]) {
            c++;
            i++;
        }
        if (c == j) {
            return to_find;
            }
        else {
            return "0";
        }
    }
}

char *my_strstr(char *str, char *to_find)
{
    int i;
    int c = 0;

    for (i = 0; str[i] != 0; i++) {
        my_str_str_cond(str, to_find, i, c);
    }
    return 0;
}
