/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** printf
*/

#include "../includes/my.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int get_args_size(char *format)
{
    int size = 0;

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i + 1] != ' ')
            size++;
    }
    return (size);
}

int find_print(va_list list, int j, char *format)
{
    int ret = 0;

    for (int i = 0; i < (sizeof(printf_list) / sizeof(*printf_list)); i++) {
        if (printf_list[i].type == format[j]) {
            ret = printf_list[i].function(list);
            break;
        } else if (format[j] == '%') {
            my_put_char('%');
            ret = 1;
            break;
        }
    }
    return (ret);
}

int my_printf(char *format, ...)
{
    int arg_size = get_args_size(format);
    int format_length = my_strlen(format);
    va_list arg_list;
    int size = 0;

    if (arg_size == 0) {
        my_put_str(format);
        return (my_strlen(format));
    }
    va_start(arg_list, format);
    for (int i = 0; i < format_length; i++) {
        if (format[i] == '%') {
            size += find_print(arg_list, ++i, format);
        } else {
            my_put_char(format[i]);
            size++;
        }
    }
    va_end(arg_list);
    return (size);
}
