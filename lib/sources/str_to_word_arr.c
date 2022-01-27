/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** str_to_word_arr
*/

#include <stdlib.h>
#include "../includes/my.h"

char **init_arr(int s1, int s2)
{
    char **arr = malloc(s1 * s2 * sizeof(char));
    int j;

    for (int i = 0; i < s1; i++) {
        arr[i] = malloc(s2 * sizeof(char));
    }
    return (arr);
}

int count_sep(char *str)
{
    int c = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' || str[i] == '\t')
            c++;
    }
    return (c);
}

char **str_to_word_arr(char *str)
{
    char **arr = NULL;
    int count = count_sep(str);
    int i = 0;
    int j = 0;

    arr = init_arr(count + 2, my_strlen(str) - count + 3);
    for (int k = 0; str[k]; k++) {
        if (str[k] != ' ' && str[k] != '\n' && str[k] != '\t') {
            arr[i][j] = str[k];
            j++;
        } else {
            arr[i][j] = '\0';
            i++;
            j = 0;
        }
        if (str[k + 1] == '\0') {
            arr[i][j] = '\0';
            i++;
            j = 0;
        }
    }
    arr[i][j] = '\0';
    arr[i] = NULL;
    return (arr);
}