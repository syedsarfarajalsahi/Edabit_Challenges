#include <stdio.h>

void last_digit(int a, int b, int c)
{
    int a_b = a * b;
    if (a_b % 10 == c % 10)
        printf("True");
    else
        printf("False");
}

int main()
{
    last_digit(12, 215, 2142);
}