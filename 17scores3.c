# include <cs50.h> // Get...
# include <stdio.h> // Printf

int main(void)
{
    int n = get_int("How many scores? ");

    int sum = 0;

    int scores[n];

    for (int i = 0; i < n; i = i + 1 )
    {
        scores[i] = get_int("Score: ");
        sum = sum + scores[i];
    }
    printf("Average: %.2f\n",  (float) sum /n );

}