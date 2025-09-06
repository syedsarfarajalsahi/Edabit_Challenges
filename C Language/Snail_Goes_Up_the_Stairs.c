// Snail Goes Up the Stairs
#include <stdio.h>

void total_distance_travelled(float height_of_stairs, float lenght_of_stairs, float height_of_tower)
{
    float number_of_steps = height_of_tower / height_of_stairs;
    float distance_travelled = (height_of_stairs + lenght_of_stairs) * number_of_steps;
    printf("%0.1f", distance_travelled);
}

int main()
{
    total_distance_travelled(0.1, 0.1, 6.0);
}