// Slope to Angle Conversion
#include <stdio.h>
#include <math.h>

void convert(double slope)
{
    double angle = (atan(slope)) * (180.0 / M_PI);
    double resultant_angle = 90.0 - angle;
    printf("Resultant angle is %0.2f", resultant_angle);
}

int main()
{
    double value = -1;
    convert(value);
}