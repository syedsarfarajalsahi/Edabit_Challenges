// Sum of two digits number
#include <stdio.h>

int sum_of_two_digit_number(int given_number)
{
    return (given_number / 10) + (given_number % 10);
}

int main()
{
    int any_number = 35;
    printf("%d", sum_of_two_digit_number(any_number));
}