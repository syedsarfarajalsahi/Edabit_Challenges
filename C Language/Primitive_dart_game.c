// Primitive Darts Game
#include <stdio.h>
#include <math.h>

int dart_scoring(float x, float y)
{
    float radius = sqrt(pow(x, 2) + pow(y, 2));
    if(radius>10)
        return 0;
    else if(radius<=10 && radius > 5)
        return 1;
    else if(radius<=5 && radius > 1)
        return 5;
    else
        return 10;
}

int main()
{
    float x = 3, y = 2;
    printf("%d", dart_scoring(x, y));
}