

// Author: ~ Nevoada (Uriel Neves Silva)
// Credits to professor David J. Malan (Harvard CS50)


# include <cs50.h> // Get // String implementatation
# include <stdio.h> // Printf
# include <string.h> // Strlen
# include <ctype.h> // Is lower function

int main(void)
    {   
    int numbers[] = {4,6,8,2,7,5,0};

    printf ("&i\n", *numbers);
    printf("&i\n", *(numbers + 1));
    printf("&i\n", *(numbers + 2));
    printf("&i\n", *(numbers + 3));
    printf ("&i\n", *(numbers + 4));
    printf ("&i\n", *(numbers + 5));
    printf("&i\n", *(numbers + 6)); 
    }