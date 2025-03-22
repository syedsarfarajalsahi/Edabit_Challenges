// Let's fuel up
#include<stdio.h>

int calculate_fuel(float distance)
{
    if(distance >= 10){
        return distance * 10;
    }
    else{
        return 100;
    }
}

int main()
{
    float distance = 23.5;
    printf("Amount of Fuel is %d", calculate_fuel(distance));
}