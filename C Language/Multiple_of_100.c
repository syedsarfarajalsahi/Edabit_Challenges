// Multiple of 100
#include <stdio.h>

void divisible_by_100(int number)
{
    if (number % 100 == 0)
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
    int number = 300;
    divisible_by_100(number);
}