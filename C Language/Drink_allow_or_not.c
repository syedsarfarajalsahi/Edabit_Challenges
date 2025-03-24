// Drink allowed?

#include <stdio.h>
#include <string.h>

void shouldServeDrinks(int age, char break_time[])
{
    if (age >= 18 && strcmp(break_time, "false") == 0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}

int main()
{
    int age = 19;
    char break_time[] = "false";
    shouldServeDrinks(age, break_time);
}