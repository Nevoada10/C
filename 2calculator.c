// gcc 2calculator.c cs50.c -o 2calculator


#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    long x = get_long("x: ");

    // Prompt user for y
    long y = get_long("x: ");

    // Perform addition
    printf("Result: %li\n",x + y);

    // 2**32 = 4 billion (2 billion positive and 2 billion negative)
    // li = 64 bit or double the size of integer. Hardware limitations.
}