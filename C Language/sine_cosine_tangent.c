#include <stdio.h>
#include <math.h>

double sine(int x, int y)
{
    double sine_value = sin(y * (M_PI / 180));
    return x * sine_value;
}

double cosine(int x, int y)
{
    double cosine_value = cos(y * (M_PI / 180));
    return x * cosine_value;
}

double tangent(int x, int y)
{
    double tangent_value = tan(y * (M_PI / 180));
    return x * tangent_value;
}

int main()
{
    printf("sine value -> %.2f\n", sine(8, 27));
    printf("cosine value -> %.2f\n", cosine(10, 4));
    printf("tangent value -> %.2f", tangent(4, 39));
}