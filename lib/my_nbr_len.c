/*
** EPITECH PROJECT, 2021
** printf
** File description:
** my_nbr_len
*/

int my_nbr_len(long long int nbr)
{
    int len = 0;

    if (nbr ==  0) {
        len = 1;
        return len;
    }

    while ((nbr / 10 || nbr % 10) != 0) {
        nbr = nbr - (nbr % 10);
        nbr = nbr / 10;
        len++;
    }
    return len;
}