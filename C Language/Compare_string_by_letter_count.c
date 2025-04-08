// Compare Strings by Count of Characters
#include <stdio.h>
#include <string.h>

void comp(char string_1[], char string_2[])
{
    if (strlen(string_1) == strlen(string_2))
        printf("true");
    else if (strlen(string_1) != strlen(string_2))
        printf("false");
}

int main()
{
    char string_a[] = "Hello World", string_b[] = "Hello John";
    comp(string_a, string_b);
}