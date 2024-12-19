// gcc 1hello.c cs50.c -o 1hello.c

// Author: ~ Nevoada (Uriel Neves Silva)
// Credits to professor David J. Malan (Harvard CS50)

#include "cs50.h" // Get ; String implementatation
#include <stdio.h> // Printf

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