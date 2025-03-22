// Check if an Integer is Divisible By Five
#include <stdio.h>

void divisible_by_5(int given_integer)
{
    if (given_integer % 5 == 0)
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
    int num = 4;
    divisible_by_5(num);
}