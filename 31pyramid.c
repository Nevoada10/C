# include <cs50.h> // Get
# include <stdio.h> // Printf
// # include <string.h> // Strlen
// # include <ctype.h> // Is lower function

void draw_pyramid(int number);  // Prototypes.

// Main function:
int main(void)
{
    int height = 4;
    draw_pyramid(height);
    return 0;

}

// Functions:
void draw_pyramid(int number)
{
    for (int i = 1; i <= number; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("x");
        }
    printf("\n");
    }
    
}