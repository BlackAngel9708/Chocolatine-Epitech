/*
** EPITECH PROJECT, 2024
** B-CPE-200-BDX-2-1-robotfactory-jimmy.ramsamynaick
** File description:
** my_str_ndup.c
*/

#include "my.h"
#include <stdlib.h>

char *my_strndup(char const *src, int n)
{
    char *duplicate = malloc(sizeof(char) * (n + 1));

    if (src == NULL)
        return NULL;
    if (duplicate == NULL)
        exit(EXIT_FAILURE);
    my_strncpy(duplicate, src, n);
    return duplicate;
}
