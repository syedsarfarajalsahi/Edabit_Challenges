// Perimeters with a Catch
#include <stdio.h>

double perimeter(char square_or_circle, int length)
{
    // length => (for square) == side length and (for circle) == radius length.
    return (square_or_circle == 's') * (4 * length) + (square_or_circle == 'c') * (6.28 * length);
}

int main()
{
    char square_or_circle = 'c';
    double length = 9;
    printf("%.2f", perimeter(square_or_circle, length));
}