/*
** EPITECH PROJECT, 2024
** test
** File description:
** palindrome.c
*/

#include <stdio.h>
#include <string.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../my.h"

int palindrome(char *chaine)
{
    int debut = 0;
    int fin = strlen(chaine) - 1;

    while (debut < fin) {
        if (chaine[debut] != chaine[fin]) {
            my_printf("%s n'est pas un palindrome.\n", chaine);
            return 84;
        }
        debut ++;
        fin --;
    }
    my_printf("%s est un palindrome.\n", chaine);
    return 0;
}
