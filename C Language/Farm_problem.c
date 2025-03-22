// How many total legs of all the three animals (chicken, cow and pig)?

#include <stdio.h>

int total_number_of_legs(int chicken, int cow, int pig)
{
    int number_of_chicken_legs, number_of_cow_leg, number_of_pig_leg, total_leg_count;
    number_of_chicken_legs = 2;
    number_of_cow_leg = 4;
    number_of_pig_leg = 4;
    total_leg_count = number_of_chicken_legs*chicken + number_of_cow_leg*cow + number_of_pig_leg*pig;
    return total_leg_count;
}

int main()
{
    int number_of_chicken = 5, number_of_cow = 2, number_of_pig = 8;
    printf("Total leg count is %d", total_number_of_legs(number_of_chicken, number_of_cow, number_of_pig));
}