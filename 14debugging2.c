# include <cs50.h>
# include <stdio.h>
// Listing used functons:
int get_negative_int(void);


// Main execution:
int main(void)
{
    int i = get_negative_int(); // Is not a default function.
    printf("%i",i);
}

// Defining Functions:
int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int ("Negative Integer: ");
        printf("n is %i\n",n);
    }
    while (n < 0); // n > 0
    return n;
}
