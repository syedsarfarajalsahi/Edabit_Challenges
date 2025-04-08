// Is the string odd or even
#include <stdio.h>
#include <string.h>

void odd_or_even(char given_string[])
{
    if (strlen(given_string) % 2 == 0)
        printf("true");
    else if (strlen(given_string) % 2 == 1)
        printf("false");
}

int main()
{
    char any_string[] = "Sarfaraj";
    odd_or_even(any_string);
}