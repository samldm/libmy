/*
** EPITECH PROJECT, 2022
** libmy
** File description:
** len
*/

int my_strlen(char *str)
{
    int i;

    for (int i = 0; str[i]; i++);
    return (i);
}

int my_nbrlen(int nb)
{
    int s;

    if (nb < 0)
        nb *= (-1);
    for (s = 1; nb >= 10; s++)
        nb /= 10;
    return (s);
}