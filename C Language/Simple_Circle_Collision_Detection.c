// Simple Circle Collision Detection
#include <stdio.h>
#include <math.h>

// C1C2 = sqrt((x1 - x2)2 + (y1 - y2)2).
// If C1C2 < R1 + R2: Circle intersects each other.

void is_Circle_Collision(int Circle_1_radius_coordinates[3], int Circle_2_radius_coordinates[3])
{
    int R1 = Circle_1_radius_coordinates[0];
    int R2 = Circle_2_radius_coordinates[0];
    int x1 = Circle_1_radius_coordinates[1];
    int x2 = Circle_2_radius_coordinates[1];
    int y1 = Circle_1_radius_coordinates[2];
    int y2 = Circle_2_radius_coordinates[2];
    int C1C2 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); // distance between two centers of the two circles
    if (R1 + R2 > C1C2)
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
    is_Circle_Collision((int[3]){1, 0, 0}, (int[3]){1, 10, 10});
}