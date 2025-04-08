// Luke, I am your ...
#include <stdio.h>
#include <string.h>

void relation_to_Luke(char person_name[])
{
    if (strcmp(person_name, "Darth Vader") == 0)
        printf("Luke, I am your father.");
    else if (strcmp(person_name, "Leia") == 0)
        printf("Luke, I am your sister.");
    else if (strcmp(person_name, "Han") == 0)
        printf("Luke, I am your brother in law.");
    else if (strcmp(person_name, "R2D2") == 0)
        printf("Luke, I am your droid.");
}

int main()
{
    char person_name[] = "Leia";
    relation_to_Luke(person_name);
}