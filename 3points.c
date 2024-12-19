// gcc 3points.c cs50.c -o 3points

// Author: ~ Nevoada (Uriel Neves Silva)
// Credits to professor David J. Malan (Harvard CS50)

#include "cs50.h"
#include <stdio.h>

int main(void)
{
    const int MINE = 2; // The variable will always be 2
    int points = get_int("How many points did you lose? ");

    if (points < MINE)
    {
        printf("You had fewer points than me.\n");
    }
    else if (points < MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same amount of points than me.\n");
    }
}