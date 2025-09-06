// Quadratic Equation
#include <stdio.h>
#include <math.h>

int quadratic_equation(int a, int b, int c)
{
    int D = sqrt(pow(b, 2) - ((a * c) * 4));
    int root = (D - b)/(a*2);
    return root;
}

int main()
{
    printf("%d", quadratic_equation(1, -12, -28));
}