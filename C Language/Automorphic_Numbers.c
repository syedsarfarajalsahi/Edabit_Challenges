// Automorphic Numbers
#include <stdio.h>

void automorphic_number(int n)
{
    int square_n = n * n;
    if ((square_n % 10) == (n % 10))
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
    int m = 8;
    automorphic_number(m);
}