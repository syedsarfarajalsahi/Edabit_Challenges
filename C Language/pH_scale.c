// The pH Scale
#include <stdio.h>

void pH_name(double pH_value)
{
    if (pH_value < 0 || pH_value > 14)
        printf("invalid");
    else if (pH_value > 7)
        printf("alkaline");
    else if (pH_value < 7)
        printf("acidic");
    else
        printf("neutral");
}

int main()
{
    double pH_value = 6.9999;
    pH_name(pH_value);
}