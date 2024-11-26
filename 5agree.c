#include <cs50.h>
#include <stdio.h>

int main(void)
{
 // Prompt user to agree with something.
 char c = get_char("Do you agree? \n");

 // Check wheter user agreed.
 if (c == 'y' || c == 'Y')
 {
    printf("The user agreed.\n");
 }
 else if (c == 'n' || c == 'N')
 {
    printf("The user did not agree.\n");
 }
}