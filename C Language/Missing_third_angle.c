// Missing Third Angle
#include <stdio.h>

void missing_angle(int angle_1, int angle_2)
{
    int last_angle = 180 - (angle_1 + angle_2);
    if (last_angle < 90)
        printf("acute");
    else if (last_angle == 90)
        printf("right");
    else if (last_angle > 90)
        printf("obtuse");
}

int main()
{
    int angle_1 = 45, angle_2 = 45;
    missing_angle(angle_1, angle_2);
}