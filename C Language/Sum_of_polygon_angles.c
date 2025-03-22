// Sum of Polygon Angles
#include <stdio.h>

int sum_of_polygon_angles(int number_of_sides)
{
    return (number_of_sides - 2) * 180;
}

int main()
{
    int number_of_polygon_sides = 4;
    printf("Sum of angles of Quadrilateral is %d", sum_of_polygon_angles(number_of_polygon_sides));
}