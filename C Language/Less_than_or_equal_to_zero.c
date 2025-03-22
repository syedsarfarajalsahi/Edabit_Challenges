// Is the number less than or equal to zero?

#include <stdio.h>

void lessThanOrEqualToZero(int num)
{
    if (num == 0 || num < 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

int main()
{
    int num = 0;
    lessThanOrEqualToZero(num);
}