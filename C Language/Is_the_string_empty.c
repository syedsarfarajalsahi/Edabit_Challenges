// Is the string empty?
#include <stdio.h>
#include <string.h>

void is_the_string_empty(char given_string[])
{
    if (strlen(given_string) == 0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}

int main()
{
    char any_string[] = " ";
    is_the_string_empty(any_string);
}