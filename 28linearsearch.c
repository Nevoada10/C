# include <cs50.h> // Get
# include <stdio.h> // Printf
# include <string.h> // Strlen
# include <ctype.h> // Is lower function

int main(void)
{
    // 1 way: (Not very efficient because it uses a lot of lines of code.)
    // int numbers[7]; // Create an array with 7 slots.
    // numbers[0] = 4;
    // numbers[1] = 6

    // 2 way: (Optimal way.)
    int numbers[] = {4,6,8,2,7,5,0};
    int target = get_int("What is the number that you are looking for? ");
    {
        for (int i = 0; i < 7; i++) // Iterate through the entire list.
        {
            if (numbers[i] == target) // Looking for the number zero.
            {
                printf("I found the number %i.\n",target);
                return 0; // 0 is usually for a code executed with sucess, and return != 0 means there was a failuer..
                // ... in it's execution. It couldn't achieve it's purporse.
            }
        }
        printf("I didn't found the number %i.\n",target);
        return 1;
    }
    
}