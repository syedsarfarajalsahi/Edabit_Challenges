#include <stdio.h>

int triangle(int layer)
{
    int result = (layer * (layer + 1)) / 2;
    return result;
}

int main()
{
    int number_of_layer = 215;
    printf("%d", triangle(number_of_layer));
}