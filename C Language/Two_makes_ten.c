// Two makes ten
#include <stdio.h>

void makes_ten(int num1, int num2)
{
    if ((num1 == 10 || num2 == 10) || (num1 + num2 == 10))
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
    int num1 = 10, num2 = 8;
    makes_ten(num1, num2);
}