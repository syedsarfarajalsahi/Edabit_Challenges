// Leap Year Function
#include <stdio.h>

void leap_year(int year)
{
    if (year % 4 == 0 || year % 400 == 0)
        printf("true");
    else
        printf("false");
}

int main()
{
    int year = 2000;
    leap_year(year);
}