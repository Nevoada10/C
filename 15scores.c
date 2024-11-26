# include <stdio.h>
# include <cs50.h>

int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("Average: %f\n", (score1+ score2 + score3) / 3.0   );
}

/* 1 error generated.
make: *** [<builtin>: 15scores] Error 1
CS50/ $ make 15scores
15scores.c:9:29: error: format specifies type 'double' but the argument has type 'int' [-Werror,-Wformat]
    printf("Average: %f\n", (score1+ score2 + score3) / 3 );
*/