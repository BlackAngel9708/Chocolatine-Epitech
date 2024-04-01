/*
** EPITECH PROJECT, 2023
** swapupcase
** File description:
** utils.c
*/

#include <stdbool.h>
#include <stdio.h>
#include "swapupcase.h"

int trim_numbers(char *str, bool is_string_odd)
{
    int size = my_strlen(str);

    if (str == NULL)
        return ERROR;
    if (size == ERROR)
        return ERROR;
    if (is_string_odd)
        --size;
    for (int i = 0; i < size; i++)
        if (str[i] >= '0' && str[i] <= '9')
            str[i] = 'a' + (str[i] - '0');
    return EPITECH_OK;
}

int my_strlen(char *str)
{
    int i = 0;

    if (str == NULL)
        return ERROR;
    while (str[i] != '\0')
        i++;
    return i;
}

static int swap_chars(char *a, char *b)
{
    char tmp = *a;

    if (a == NULL || b == NULL)
        return ERROR;
    *a = *b;
    *b = tmp;
    return EPITECH_OK;
}

int swap_string(char *str, bool is_string_odd)
{
    int size = my_strlen(str);
    int res = 0;

    if (str == NULL)
        return ERROR;
    if (size == ERROR)
        return ERROR;
    if (is_string_odd)
        --size;
    for (int i = 0; i < size; i += 2) {
        res = swap_chars(&str[i], &str[i + 1]);
        if (res == ERROR)
            return ERROR;
    }
    return EPITECH_OK;
}

int case_string(char *str, bool is_string_odd)
{
    int size = my_strlen(str);

    if (str == NULL)
        return ERROR;
    if (size == ERROR)
        return ERROR;
    if (is_string_odd)
        --size;
    for (int i = 0; i < size; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && (i % 2 == 0))
            str[i] -= 32;
        if (str[i] >= 'A' && str[i] <= 'Z' && (i % 2 == 1))
            str[i] += 32;
    }
    return EPITECH_OK;
}
