/*
** EPITECH PROJECT, 2023
** swapupcase
** File description:
** swapupcase.h
*/

#pragma once

#include <stdbool.h>

#define EPITECH_OK 0
#define EPITECH_KO 84

#define ERROR -1

int swapupcase(char *str);

int trim_numbers(char *str, bool is_string_odd);

int my_strlen(char *str);

int swap_string(char *str, bool is_string_odd);

int case_string(char *str, bool is_string_odd);
