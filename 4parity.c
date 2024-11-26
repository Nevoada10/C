#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n: ");

    if ((n % 2) == 0) // If n is even, par.
    {
        printf("%i is even.\n",n);
    }
    else // If n is odd, ímpar.
    {
        printf("%i is odd.\n",n);
    }
}