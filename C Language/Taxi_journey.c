// Taxi Journey
#include <stdio.h>

int journey_distance(int cost)
{
    int distance = 0;
    if (cost > 3)
    {
        distance = 1 + ((cost - 3) / 2);
    }
    else
    {
        distance += 1;
    }
    return distance;
}

int main()
{
    int cost = 9;
    printf("%d", journey_distance(cost));
}