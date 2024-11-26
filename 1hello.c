#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Hello World!\n");

    string answer = get_string ("What is your name? \n");
    printf( "Hello %s!\n", answer);
}

// Comments
// Stdio.h = library with printf


// Terminal Commands:
// make <name_of_the_file> = creates exe machine code of that file.
// ./ <name_of_the_file> = executes file inside the same project folder.
// rm <name_ofthe_file = removes file.
// ls = list all of the files in the folder.
// cd = change directory / home directory
// .. = goes back to the previous directory ( can be used multiple times in one take)
// code <name_of_the_file> = creates a new code.