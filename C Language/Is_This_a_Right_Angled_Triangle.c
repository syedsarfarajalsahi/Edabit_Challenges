// Is This a Right Angled Triangle?

#include <stdio.h>
#include <math.h>

void is_right_triangle(int a, int b, int c)
{
    int hypotenuse, altitude, base;
    if (a >= b && a >= c)
        hypotenuse = a, base = b, altitude = c;
    else if (b >= a && b >= c)
        hypotenuse = b, base = a, altitude = c;
    else
        hypotenuse = c, base = a, altitude = b;

    if (pow(hypotenuse, 2) == pow(base, 2) + pow(altitude, 2))
        printf("True");
    else
        printf("False");
}

int main()
{
    is_right_triangle(70, 130, 110);
}