// Author: ~ Nevoada (Uriel Neves Silva)
// Credits to professor David J. Malan (Harvard CS50)

# include <cs50.h> // Get
# include <stdio.h> // Printf
# include <string.h> // Strlen
# include <ctype.h> // Is lower function

int main(int argc, string argv[])
{
    // int argc = Number of words command line arguments
    // ; string argv[] = Array of all of the strings typed by the user in the terminal.
    // ; argv[0] = Name of the program. // argv[1]: First string after the name of the program.
    // ; argv[n] = Subsquent arguments. For n = [ 0, 1, 2, 3, ...]. Empty arguments = (null)
    if (argc == 2)
        printf("Hello %s!\n",argv[1]);
    else
        printf("Hello World.\n");
}