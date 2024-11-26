#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int ("Square size: ");
    }
    while (n < 1);

    for ( int i = 0; i < n; i++ ) // For each row
    {
        for ( int j = 0; j < n; j++ ) // For each column
        {
            printf("#");
        }
    printf("\n");
    }
}

/*
int n;
while (true)
{
    n = get_int ("Square size");
    if n > 0
    {
        break
    }
}
*/