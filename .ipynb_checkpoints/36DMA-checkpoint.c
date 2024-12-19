// gcc 36DMA.c cs50.c -o 36DMA

// Author: ~ Nevoada (Uriel Neves Silva)
// Credits to professor David J. Malan (Harvard CS50)
// Dinamic Memory Allocation

#include "cs50.h" // Get // String implementatation
#include <stdio.h> // Printf
#include <string.h> // Strlen
#include <ctype.h> // Is lower function

int main(void)
{
    char *s = get_string("Type in a string: "); // String
    char *t = malloc(strlen(s) + 1); // Allocate memory for t

    for (int i=0; i<strlen(s); i++)
    {
        t[i] = s[i]; // Copying the string into t.
    }


}

    // Input: s: hi!
    // Output: s: Hi! t: Hi!x
    // Explanation: when copying s to t, we are copying the addresses...