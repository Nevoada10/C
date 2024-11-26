# include <cs50.h> // Get
# include <stdio.h> // Printf
# include <string.h> // Strlen, Strcomp
# include <ctype.h> // Is lower function

typedef struct
{
    string name; // Write the data you want your new type to have
    string number; // Wrap it with typedef struct, finish by telling the name of your new datatype.
}
person;

// Now related pieces of information are ENCAPSULATED, so this code is a better designed version compared to having independent data.
// The main difference between struct orienteed (C) and object oriented ( Java, C++, Python ) is that OBJECTS store both DATA and FUNCTIONS.
// In C you have Data Structures that only store DATA.

int main(void)
{
    person people[2]; // Create an array of people with size 2.

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";


    people[0].name = "David";
    people[0].number = "+1-949-468-2750";

    /*
    The DOT. means go INSIDE that STRUCTURE and acess the variable called name, and give this value "Carter".
    */

    for (int i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name,"David") == 0)
        {
            printf("Found %s\n",people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}