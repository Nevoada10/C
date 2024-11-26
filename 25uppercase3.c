# include <cs50.h> // Get
# include <stdio.h> // Printf
# include <string.h> // Strlen
# include <ctype.h> // Is lower function

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    for ( int i = 0, n = strlen(s); i < n; i++ )
    // if the letter is lowercase we subtract 32 to make it uppercase.
    {
        printf("%c",toupper(s[i]));
    }
    // else if the letter is uppercase, we print it as it is.
    printf("\n");
}