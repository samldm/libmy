/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** print
*/

#include <unistd.h>
#include "../includes/my.h"

void my_put_char(char c)
{
    write(1, &c, 1);
}

void my_put_str(char *str)
{
    for (int i = 0; str[i]; i++)
        my_put_char(str[i]);
}

void my_put_err(char *str)
{
    write(2, str, my_strlen(str));
}

void my_put_nbr(int nb)
{
    int size = my_nbrlen(nb);
    int x;

    if (nb < 0) {
        nb *= (-1);
        my_put_char(45);
    }
    for (int i = 0; i < size; i++) {
        x = nb;
        for (int j = 1; j < (size - i); j++)
            x /= 10;
        my_put_char(48 + (x % 10));
    }
}

void my_put_unsigned(unsigned int nb)
{
    int size = my_unsignedlen(nb);
    int x;

    if (nb < 0) {
        nb *= (-1);
        my_put_char(45);
    }
    for (int i = 0; i < size; i++) {
        x = nb;
        for (int j = 1; j < (size - i); j++)
            x /= 10;
        my_put_char(48 + (x % 10));
    }
}