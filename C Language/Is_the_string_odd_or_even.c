// Is the string odd or even?
#include <stdio.h>
#include <string.h>

void odd_or_even(char given_string[])
{
    int size = strlen(given_string);
    if (size % 2 == 0)
        printf("true");
    else
        printf("false");
}

int main()
{
    char any_string[] = "Hellow";
    odd_or_even(any_string);
}