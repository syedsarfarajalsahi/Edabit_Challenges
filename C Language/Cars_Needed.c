// Four Passengers and a Driver
#include <stdio.h>

int cars_needed(int number_of_passengers)
{
    int number_of_cars = 0;
    if (number_of_passengers % 5 == 0)
        number_of_cars = (number_of_passengers / 5);
    else
    {
        number_of_cars = (number_of_passengers / 5) + 1;
    }

    return number_of_cars;
}

int main()
{
    int number_of_passengers = 0;
    printf("%d", cars_needed(number_of_passengers));
}