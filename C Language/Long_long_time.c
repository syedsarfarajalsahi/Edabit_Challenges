// A Long Long Time
#include <stdio.h>

int longest_time(int hour, int minute, int second)
{
    int hour_to_second = hour * 3600, minute_to_second = minute * 60;
    if (hour_to_second >= minute_to_second && hour_to_second >= second)
        return hour;
    else if (minute_to_second >= hour_to_second && minute_to_second >= second)
        return minute;
    else
        return second;
}

int main()
{
    int hour = 2, minute = 300, second = 15000;
    printf("%d", longest_time(hour, minute, second));
}