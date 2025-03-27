// Both given number be zero, positive or negative
#include <stdio.h>

void both(int num1, int num2)
{
    if ((num1 > 0 && num2 > 0) || (num1 < 0 && num2 < 0) || (num1 == 0 && num2 == 0))
        printf("true");
    else
        printf("false");
}

int main()
{
    int num1 = 0, num2 = 0;
    both(num1, num2);
}