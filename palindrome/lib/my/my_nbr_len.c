/*
** EPITECH PROJECT, 2023
** My printf
** File description:
** my_nbr_len
*/

#include "my.h"

int my_nbr_len(int n, const char *base)
{
    int i = (n <= 0);
    int len = my_strlen(base);

    for (; n; n /= len)
        i = i + 1;
    return i;
}
