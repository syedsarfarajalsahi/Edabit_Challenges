// Legendre's Formula
#include <stdio.h>
#include <math.h>

int legendre(int p, int n)
{
    int i = 1, sum = 0;

    while (pow(p, i) <= n)
    {
        sum += (int)floor((double)n / pow(p, i));
        i++;
    }

    return sum;
}

int main()
{
    int p = 5, n = 100;
    printf("%d", legendre(p, n));
}