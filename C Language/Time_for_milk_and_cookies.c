// Is it Time for Milk and Cookies?
#include <stdio.h>

void timeForMilkAndCookies(int year, int month, int day)
{
    if (month == 11 && day == 24)
        printf("true");
    else
        printf("false");
}

int main()
{
    int year = 2026, month = 11, day = 24;
    timeForMilkAndCookies(year, month, day);
}