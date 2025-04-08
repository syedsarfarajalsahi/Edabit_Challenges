// Front 3 - Slice Check Repeat Concatenate
#include <stdio.h>
#include <string.h>

void front_three(char any_string[])
{
    char new_string[100];
    if (strlen(any_string) < 3)
    {
        for (int i = 0; i < 3; i++)
        {
            strcat(new_string, any_string);
        }
        printf("%s", new_string);
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            strncat(new_string, any_string, 3);
        }
        printf("%s", new_string);
    }
}

int main()
{
    char given_string[] = "Ho";
    front_three(given_string);
}