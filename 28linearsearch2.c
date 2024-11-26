# include <cs50.h> // Get
# include <stdio.h> // Printf
# include <string.h> // Strlen
# include <ctype.h> // Is lower function

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};
    string target = get_string("Which name are you looking for? ");

    for (int i = 0; i < 7; i++) // Iterates through the list.
    {
        if (strcmp(names[i], target) == 0)
        /*
        Apparently string is not a primitive format ( integers, float, booleans), so you can't use "=="
        to compare 2 strings. You actually have to use a special function that is strcmp, A.K.A string comparisson.

        NEW FUNCTION - 0 is for equal, negatives ints mean that s1 comes before s2, positive ints mean that s2 comes
        before s1. In "ASCIIbetical" order.

        "If the iterated string is equal to the target string strcmp should return 0, else it means it's not the same.
        */
        {
            printf("I found %s in the list!\n", target);
            return 0;
        }
    }
    printf("I didn't find %s in the list. :(\n", target);
    return 1;
}
