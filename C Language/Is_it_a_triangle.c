// Is it a triangle?
#include <stdio.h>

void is_triangle(int side1, int side2, int side3)
{
    if (side1 + side2 > side3)
        printf("true");
    else
        printf("false");
}

int main()
{
    int side1 = 4, side2 = 3, side3 = 8;
    is_triangle(side1, side2, side3);
}