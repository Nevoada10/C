// gcc 35copy.c cs50.c -o 35copy

// Author: ~ Nevoada (Uriel Neves Silva)
// Credits to professor David J. Malan (Harvard CS50)

# include "cs50.h" // Get // String implementatation
# include <stdio.h> // Printf
# include <string.h> // Strlen
# include <ctype.h> // Is lower function

int main(void)
{
    string s = get_string("Type in a string: "); // Or char *s
    string t = s;

    t[0] = toupper(t[0]);
    printf("s:%s\n", s);
    printf("t:%s\n", t); 

}

    // Input: s: hi!
    // Output: s: Hi! t: Hi!x
    // Explanation: when copying s to t, we are copying the addresses...