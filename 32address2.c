// Author: ~ Nevoada (Uriel Neves Silva)
// Credits to professor David J. Malan (Harvard CS50)

# include <cs50.h> // Get // String implementatation
# include <stdio.h> // Printf
# include <string.h> // Strlen
# include <ctype.h> // Is lower function

int main(void)
{
   string s = "HI!"; // string s = char *s = "HI!";
   char c = s[0];
   char *p = &c;
   printf("S:%p\n", s); // Prints the address of the first element in the string s.
   printf("P:%p\n", p); // Prints the address of the copy of made from the string s, that's it's on a different location.

   char *a = &s[0];
   printf("\nS:%p\n",s);
   printf("A:%p\n",a);

   printf("\nS:%p\n",s);
   printf("\nS[0]:%p\n",&s[0]);
   printf("S[1]:%p\n",&s[1]);
   printf("S[2]:%p\n",&s[2]);
   printf("S[3]:%p\n",&s[3]); // \0 , null character.
}

// 0x123 for example is the number 123 in hedadecimal notation
// Would be: 36*1+6*2+3  = 36 + 18 + 3 = 57
// typedef char *string;
