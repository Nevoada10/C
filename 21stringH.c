# include <cs50.h>
# include <stdio.h>
# include <string.h>

int get_length(string text);

int main (void)
{
    string text = get_string("Word: ");     // Get a string.
    int text_length = strlen(text);    // Calculate it's size using *STRLEN*.
    printf("%i\n", text_length);          // Print it.
}
// ~ Nevoada
// CS50 MANUAL PAGES
// https://manual.cs50.io