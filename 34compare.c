// gcc 34compare.c cs50.c -o 34compare

// Author: ~ Nevoada (Uriel Neves Silva)
// Credits to professor David J. Malan (Harvard CS50)

# include <cs50.h> // Get // String implementatation
# include <stdio.h> // Printf
# include <string.h> // Strlen
# include <ctype.h> // Is lower function

int main(void)
{
    string s = get_int("s: "); // or char *s
    string t = get_int("t: "); // or char *t

    if (s == t)
    {
        printf("Same\n");
    }
    else 
    {
        printf("Different\n");
    }
}

// Input: s: Hi! t: Hi! or char *s, char *t
// Output: Different

// Explanation: when we compare s and t with the "==" operator, we are comparing the addresses... 
// they store, not the strings they point to. Since the addresses are not the same, 
//the strings are considered to be different, even though they contain the same characters.
