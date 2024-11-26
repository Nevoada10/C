// Author: ~ Nevoada (Uriel Neves Silva)
// Credits to professor David J. Malan (Harvard CS50)

# include <cs50.h> // Get
# include <stdio.h> // Printf
# include <string.h> // Strlen
# include <ctype.h> // Is lower function

int main(void)
{
   int n = 50;
   int *p = &n; // Store the address/pointer of n in a variable.
   printf("%i %p \n",n,p); // %p Is a generally an special way to print a pointer.

   // or

   printf("%p \n", &n);

   //

   printf("%i \n", *p); // Print the pointer of the corresponding integer.

}
