// Is the Last Character N?
#include <stdio.h>
#include <string.h>

void is_last_character_n(char given_string[])
{
    if (given_string[strlen(given_string) - 1] == 'n')
        printf("true");
    else
        printf("false");
}

int main()
{
    char given_string[] = "on";
    is_last_character_n(given_string);
}