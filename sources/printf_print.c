/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** printf_print
*/

#include <stdarg.h>
#include "../includes/my.h"

int print_str(va_list list)
{
    char *str = va_arg(list, char *);

    my_put_str(str);
    return (my_strlen(str));
}

int print_int(va_list list)
{
    int nb = va_arg(list, int);
    int len = my_nbrlen(nb);

    my_put_nbr(nb);
    return (nb < 0 ? len - 1 : len);
}

int print_char(va_list list)
{
    char c = va_arg(list, int);

    my_put_char(c);
    return (1);
}

int print_unsigned(va_list list)
{
    unsigned int nb = va_arg(list, unsigned int);
    int len = my_unsignedlen(nb);

    my_put_unsigned(nb);
    return (nb < 0 ? len - 1 : len);
}