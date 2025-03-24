// Return Negative
#include <stdio.h>

int return_negative(int number)
{
    if (number <= 0)
    {
        return number;
    }
    else
    {
        return (-1) * number;
    }
}

int main()
{
    int number = 2;
    printf("%d", return_negative(number));
}