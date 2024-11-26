# include <cs50.h>
# include <stdio.h>

int get_length(string text);

int main (void)
{
    string text = get_string("Word: ");     // Get a string.
    int text_length = get_length(text);    // Calculate it's size.
    printf("%i\n", text_length);          // Print it.
}

// Defining functions:
int get_length(string text) // Get lenght function.
{
    int i = 0; // Initialize a counter variable.
    while (text[i] != '\0') // Set the sum loop.
    {
        i = i + 1;
    }
    return i; // Return i
}
// ~ Nevoada