/*
** EPITECH PROJECT, 2023
** ws-github-actions
** File description:
** integration_tests
*/

#include "swapupcase.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdlib.h>
#include <string.h>

Test(integration, regular_even, .init = cr_redirect_stdout) {
    char *str = strdup("overflow");
    int res = swapupcase(str);

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("VoReLfWo");
    free(str);
}

Test(integration, regular_even_2, .init = cr_redirect_stdout) {
    char *str = strdup("oVerFLoW");
    int res = swapupcase(str);

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("VoReLfWo");
}

Test(integration, regular_odd_1, .init = cr_redirect_stdout) {
    char *str = strdup("oVerFLo");
    int res = swapupcase(str);

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("VoReLfo");
    free(str);
}

Test(integration, regular_nums_only, .init = cr_redirect_stdout) {
    char *str = strdup("1234");
    int res = swapupcase(str);

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("CbEd");
    free(str);
}

Test(integration, regular_nums_str, .init = cr_redirect_stdout) {
    char *str = strdup("Hello2World");
    int res = swapupcase(str);

    cr_assert_eq(res, 0);
    cr_assert_stdout_eq_str("EhLlCoOwLrd");
    free(str);
}

Test(integration, regular_null) {
    char *str = NULL;
    int res = swapupcase(str);

    cr_assert_eq(res, EPITECH_KO);
}
