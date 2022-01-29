/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** my_strcmp
*/

#include "../includes/my.h"

int my_strcmp(char *src, char *str)
{
    int ret = 1;

    if (my_strlen(src) != my_strlen(str))
        return (0);
    for (int i = 0; src[i]; i++) {
        if (src[i] != str[i]) {
            ret = 0;
            break;
        }
    }
    return (ret);
}