// Convert Hours and Minutes to Seconds

#include <stdio.h>

int number_of_seconds(int hours, int minutes)
{
    // 1 hours = 60 minutes * 60 seconds
    int seconds = (hours * 3600) + (minutes * 60);
    return seconds;
}

int main()
{
    int hours = 3, minutes = 35;
    printf("%d hours and %d minutes is equal to %d seconds", hours, minutes, number_of_seconds(hours, minutes));
}