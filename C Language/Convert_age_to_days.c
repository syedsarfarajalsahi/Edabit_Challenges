// Convert Age to Days
#include <stdio.h>

int age_to_days(int age)
{
    return age * 365;
}

int main()
{
    int age = 65;
    printf("%d", age_to_days(age));
}