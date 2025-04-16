// Equality of 3 Values
#include <stdio.h>

void equal(int num1, int num2, int num3)
{
    if (num1 == num2 && num2 == num3)
        printf("3");
    else if (num1 == num2 || num2 == num3 || num1 == num3)
        printf("2");
    else
        printf("0");
}

int main()
{
    int num1 = 3, num2 = 4, num3 = 1;
    equal(num1, num2, num3);
}