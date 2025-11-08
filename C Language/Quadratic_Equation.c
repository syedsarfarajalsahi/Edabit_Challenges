// Quadratic Equation
#include <stdio.h>
#include <math.h>

int quadratic_equation(int a, int b, int c)
{
    // D - discriminant of the quadratic equation
    double root, D;
    D = pow(b, 2) - (4 * (a * c));
    if (D < 0)
    {
        printf("Root is imaginary number.");
        return 0;
    }
    root = (sqrt(D)-b)/(2*a);
    return root;
}

int main()
{
    printf("%d", quadratic_equation(1, -4, 1));
}