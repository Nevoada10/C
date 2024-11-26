#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");     // Prompt user for x.
    int y = get_int("y: ");     // Prompt user for y.

    float z = (float) x / (float) y ;   // Operation // Parenthesis are necessary.

    // Perform addition
    printf("Result: %.50f\n", z ); // On purpose, to demonstrate hardware limitations.
}
// 2ˆ32 = 4 billion (2 billion positive and 2 billion negative).
// li = 64 bit or double the size of integer. Hardware limitations.