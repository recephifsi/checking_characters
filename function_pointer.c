#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

#define CHARACTERS 0x80

/**
 * @brief iterate characters to check if upper, lower, alphabethic, digit or xdigit and prints to screen.
 * @param test_name to show test name in the firs parameter
 * @param fp used as function pointer to use ctype.h functions
 */
void print_test(const char *test_name, int (*fp)(int))
{
    printf("%s testinden gecen krakterler\n", test_name);

    for (uint16_t i = 0; i < CHARACTERS; i++)
    {
        if (fp(i))
            printf("%c", i);
    }
    printf("\n----------------------------------------\n");
}

int main()
{
    print_test("isupper", &isupper);
    print_test("islower", &islower);
    print_test("isalpha", &isalpha);
    print_test("isdigit", &isdigit);
    print_test("isxdigit", &isxdigit);
}