/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>

char **str_to_word_arr(char *str);

void my_put_char(char c);

void my_put_str(char *str);

void my_put_err(char *str);

void my_put_nbr(int nb);

void my_put_unsigned(unsigned int nb);

int my_printf(char *format, ...);

int my_strlen(char *str);

int my_nbrlen(int nb);

int my_unsignedlen(unsigned int nb);

int print_str(va_list list);

int print_int(va_list list);

int print_char(va_list list);

int print_unsigned(va_list list);

typedef struct printf_functions
{
    char type;
    int (*function)(va_list list);
} print_f_t;

static const print_f_t printf_list[] = {
    {'s', &print_str},
    {'d', &print_int},
    {'i', &print_int},
    {'c', &print_char},
    {'u', &print_unsigned}
};

#endif