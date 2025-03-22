// Basket Points
#include <stdio.h>

int points(int two_pointer_score, int three_pointer_score)
{
    int points = two_pointer_score * 2 + three_pointer_score * 3;
    return points;
}

int main()
{
    int number_of_two_pointer = 38, number_of_three_pointer = 8;
    printf("Total points equals to %d", points(number_of_two_pointer, number_of_three_pointer));
}