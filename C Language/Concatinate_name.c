// Concatenate First and Last Name into One String
#include <stdio.h>

void concat_name(char first_name[], char last_name[])
{
    printf("%s, %s", first_name, last_name);
}

int main()
{
    char first_name[] = "Syed Sarfaraj", last_name[] = "Al Sahi";
    concat_name(first_name, last_name);
}