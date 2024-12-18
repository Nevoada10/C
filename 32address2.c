

// Author: ~ Nevoada (Uriel Neves Silva)
// Credits to professor David J. Malan (Harvard CS50)


# include <cs50.h> // Get // String implementatation
# include <stdio.h> // Printf
# include <string.h> // Strlen
# include <ctype.h> // Is lower function

// Custom string type definition to demonstrate how strings work in C
// This shows that a string is fundamentally a pointer to a character
typedef struct
{
    // A pointer to the first character of the string
    // Represents the memory address of the start of the string
    char *str; 
} string; 

int main(void)
{
   // Declare a string literal "HI!" 
   // In C, string literals are stored in read-only memory
   string s = "HI!"; 

   // Extract the first character of the string
   char c = s[0];

   // Create a pointer p that points to the address of c
   char *p = &c;

   // Print the memory address of the original string s
   printf("S:%p\n", s); 

   // Print the memory address of the pointer p (which points to a copy of the first character)
   printf("P:%p\n", p); 

   // Create another pointer a that points to the first character of s
   char *a = &s[0];

   // Repeat printing addresses to demonstrate pointer behavior
   printf("\nS:%p\n", s);  // Address of the original string
   printf("A:%p\n", a);    // Address of the first character (same as s)

   // Demonstrate memory addresses of consecutive characters in the string
   printf("\nS:%p\n", s);           // Original string address
   printf("S[0]:%p\n", &s[0]);      // Address of first character
   printf("S[1]:%p\n", &s[1]);      // Address of second character
   printf("S[2]:%p\n", &s[2]);      // Address of third character
   printf("S[3]:%p\n", &s[3]);      // Address of null terminator ('\0')

   // NOTE: The following printf statements are incorrect and will likely cause compilation errors
   // They seem to be attempting to print something, but the format is wrong
   // Commented out to prevent potential compilation issues
   // printf("&c\n", s[0]);
   // printf("&c\n", s[1]);
   // printf("&c\n", s[2]);
   // printf("&c\n", s[3]);
}

// Hexadecimal notation example: 0x123 = (3*16^0) + (2*16^1) + (1*16^2)