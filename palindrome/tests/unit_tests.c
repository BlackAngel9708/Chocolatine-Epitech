/*
** EPITECH PROJECT, 2024
** test
** File description:
** unit_tests.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../my.h"

#include <assert.h>
#include <string.h>

void test_is_palindrome(void)
{
    assert(is_palindrome("radar") == 0);
    assert(is_palindrome("hello") == 84);
}

void test_is_not_palindrome(void)
{
    assert(is_palindrome("apple") == 84);
    assert(is_palindrome("banana") == 84);
}
