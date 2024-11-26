#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // First manner.
    printf("Meow!\n");
    printf("Meow!\n");
    printf("Meow!\n.\n");

    // Second manner.
    int counter = 0;

    while (counter<3)
    {
        printf("Meow!\n");
        counter += 1;
    }
    printf(".\n");
     // Third manner.
    int counter2  = 1;

    while (counter2<=3)
    {
        printf("Meow!\n");
        counter2 += 1;
    }
    printf("4).\n");

    // Forth manner.
    int counter3  = 3;

    while (counter3 > 0)
    {
        printf("Meow!\n");
        counter3 --;
    }
}