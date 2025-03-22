// Reverse the boolean value
#include <stdio.h>
#include <string.h>

void reverse(char boolean[])
{
    if (strcmp(boolean, "True") == 0 || strcmp(boolean, "true") == 0)
    {
        printf("false");
    }
    else if (strcmp(boolean, "False") == 0 || strcmp(boolean, "false") == 0)
    {
        printf("true");
    }
    else
    {
        printf("Please enter valid boolean value\nIt's either true or false");
    }
}

int main()
{
    char boolean[] = "";
    reverse(boolean);
}