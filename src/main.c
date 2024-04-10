/*
** EPITECH PROJECT, 2023
** swapupcase
** File description:
** main
*/

#include <stdio.h>
#include "swapupcase.h"

int main(const int ac, char **av)
{
    if (ac != 2 || av == NULL || av[1] == NULL)
        return EPITECH_KO;
    return swapupcase(av[1]);
}
