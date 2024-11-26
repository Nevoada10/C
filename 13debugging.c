# include <cs50.h>
# include <stdio.h>

int get_negative_int(void);

int main (void)
{
    for ( int i = 0; i <= 3; i++ )
    {
        printf("I is %i\n",i);
        printf("#\n");
    }
}



/*
DUBUGGING TECHNIQUES:
1) printf
2) TERMINAL: debug50 ./<name_of_the_file>
3) Explain your code to yourself (A.K.A Rubber duck)

OUTPUT:
I is 0
#
I is 1
#
I is 2
#
I is 3
#

TERMINAL:
debug50 ./<compiled file name> SUPER IMPORTANT
*/