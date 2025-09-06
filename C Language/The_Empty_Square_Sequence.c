// The Empty Square Sequence
#include <stdio.h>
#include <math.h>

int empty_Sq(int step)
{
    int number_of_circle, area_of_square, empty_square;
    number_of_circle = 4 * step;
    area_of_square = pow(step, 2);
    empty_square = (area_of_square * 4) - number_of_circle;
    return empty_square;
}

int main()
{
    int step = 10;
    printf("No. of empty square is %d", empty_Sq(step));
}