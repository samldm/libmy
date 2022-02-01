/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** my_getnbr
*/

#include "../includes/my.h"

int my_getnbr(char *str)
{
    int res = 0;
    int mul = 1;
    int len = my_strlen(str);

    for (int i = len; i >= 0; i--) {
        if (str[i] >= '0' && str[i] <= '9') {
            res += (str[i] - '0') * mul;
            mul *= 10;
        }
    }
    return (res);
}
