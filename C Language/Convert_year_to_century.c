// Convert Year to Century
#include <stdio.h>

int convert_from_year_to_century(int year)
{
    int century = (year % 100 == 0) ? (year / 100) : ((year / 100) + 1);
    return century;
}

int main()
{
    int year = 1950;
    printf("%d", convert_from_year_to_century(year));
}