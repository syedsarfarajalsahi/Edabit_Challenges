// On/Off Switch
#include <stdio.h>
#include <math.h>

int pos_com(int number_of_switch)
{
    return pow(2, number_of_switch);
}

int main()
{
    int number_of_switch = 10;
    printf("%d", pos_com(number_of_switch));
}