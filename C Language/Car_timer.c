// Car Timer
#include <stdio.h>

void car_timer(int minutes)
{
    int new_hour = 0, new_minute = 0;

    if (minutes >= 60)
    {
        new_hour = minutes / 60;
        new_minute = minutes % 60;
    }
    else
    {
        new_minute = minutes;
    }

    int sum_of_digits_in_current_time =
        (new_hour / 10) + (new_hour % 10) +
        (new_minute / 10) + (new_minute % 10);

    printf("%d", sum_of_digits_in_current_time);
}

int main()
{
    int minute_passed = 808;
    car_timer(minute_passed);
}