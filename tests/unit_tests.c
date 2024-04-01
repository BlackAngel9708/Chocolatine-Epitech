/*
** EPITECH PROJECT, 2023
** stumpers
** File description:
** tests_stumper
*/

#include "swapupcase.h"
#include <criterion/criterion.h>
#include <criterion/internal/assert.h>
#include <criterion/redirect.h>

/**
 * STRLEN TESTS
 */

Test(test_strlen, test_regular) {
    char *str = "Hello World";
    int res = my_strlen(str);

    cr_assert_eq(res, 11);
}

Test(test_strlen, test_null) {
    char *str = NULL;
    int res = my_strlen(str);

    cr_assert_eq(res, -1);
}

Test(test_strlen, test_empty) {
    char *str = "";
    int res = my_strlen(str);

    cr_assert_eq(res, 0);
}

/**
 * TRIM_NUMBERS TESTS
 */

Test(test_trim_numbers, test_no_numbers) {
    char *str = strdup("Hello World");
    int res = trim_numbers(str, false);

    cr_assert_eq(res, 0);
    cr_assert_str_eq(str, "Hello World");
}

Test(test_trim_numbers, test_numbers) {
    char *str = strdup("Hello 123 World");
    int res = trim_numbers(str, false);

    cr_assert_eq(res, 0);
    cr_assert_str_eq(str, "Hello bcd World");
}

Test(test_trim_numbers, test_null) {
    char *str = NULL;
    int res = trim_numbers(str, false);

    cr_assert_eq(res, -1);
}

/**
 * SWAP_STRING TESTS
 */

Test(swap_string, test_regular) {
    char *str = strdup("Odd String");
    int res = swap_string(str, false);

    cr_assert_eq(res, 0);
    cr_assert_str_eq(str, "dO dtSirgn");
}

Test(swap_string, test_null) {
    char *str = NULL;
    int res = swap_string(str, false);

    cr_assert_eq(res, -1);
}

Test(swap_string, test_empty) {
    char *str = strdup("");
    int res = swap_string(str, false);

    cr_assert_eq(res, 0);
    cr_assert_str_eq(str, "");
}

Test(swap_string, test_regular_odd) {
    char *str = strdup("Hello World");
    int res = swap_string(str, true);

    cr_assert_eq(res, 0);
    cr_assert_str_eq(str, "eHll ooWlrd");
}

/**
 * CASE_STRING TESTS
 */

Test(case_string, test_regular) {
    char *str = strdup("Hello World");
    int res = case_string(str, true);

    cr_assert_eq(res, 0);
    cr_assert_str_eq(str, "HeLlO WoRld");
}

Test(case_string, test_null) {
    char *str = NULL;
    int res = case_string(str, false);

    cr_assert_eq(res, -1);
}

Test(case_string, test_empty) {
    char *str = strdup("");
    int res = case_string(str, false);

    cr_assert_eq(res, 0);
    cr_assert_str_eq(str, "");
}

Test(case_string, test_regular_even) {
    char *str = strdup("Odd String");
    int res = case_string(str, false);

    cr_assert_eq(res, 0);
    cr_assert_str_eq(str, "OdD StRiNg");
}
