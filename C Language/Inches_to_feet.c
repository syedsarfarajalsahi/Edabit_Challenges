// Convert inches to feet
#include <stdio.h>

int inchesToFeet(int inches)
{
    int feet = inches / 12;
    return feet;
}

int main()
{
    int inches = 324;
    printf("%d inches equals to %d feet", inches, inchesToFeet(inches));
}