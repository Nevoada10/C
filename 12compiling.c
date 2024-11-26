#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Hello World!\n");

    string answer = get_string ("What is your name? \n");
    printf( "Hello %s!\n", answer);

/*

Clang : is the actual COMPILER of C language.
-o : stands for OUTPUT.
firstname : Is the name chosen for the compiled file.
secondname.c : Is the C file that needs to be compiled.

Syntax: clang -o <firstfile> <secondfile.c>
Example: clang -o hello hello.c


OBS:w/o <>
*/