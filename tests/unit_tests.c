/*
** EPITECH PROJECT, 2024
** test
** File description:
** unit_tests.c
*/

#include <criterion/criterion.h>
#include "../lib/my/my_printf.h"

Test(test_palindrome, should_return_0_for_palindrome)
{
    cr_assert_eq(palindrome("radar"), 0);
}

Test(test_palindrome, should_return_84_for_non_palindrome)
{
    cr_assert_eq(palindrome("hello"), 84);
}
