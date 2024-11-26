# include <stdio.h> //printf
# include <cs50.h> // get

// For the program not to crash because the function was not defined yet
// C reads top to bottom.
void meow(int n); // Output type and ( Input + type ).

int main(void)
{
    meow(3);
}

// FUNCTIONS:

// def function meow:
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow!\n");
    }
}