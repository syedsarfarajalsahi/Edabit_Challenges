#include <stdio.h>
#include <math.h>

void isRepdigit(int given_number)
{
    // if (given_number >= 0)
    // {
    //     if (given_number >= 11 && given_number <= 99 && given_number % 11 == 0)
    //     {
    //         printf("True");
    //     }
    //     else if (given_number >= 111 && given_number <= 999 && given_number % 111 == 0)
    //     {
    //         printf("True");
    //     }
    //     else if (given_number >= 1111 && given_number <= 9999 && given_number % 1111 == 0)
    //     {
    //         printf("True");
    //     }
    //     else
    //     {
    //         printf("False");
    //     }
    // }
    // else
    // {
    //     printf("False");
    // }
    if (given_number < 0)
    {
        printf("False");
        return;
    }

    int digits = (given_number == 0) ? 1 : (int)log10(given_number) + 1;
    int divisor = (int)(pow(10, digits) - 1) / 9;

    if (given_number % divisor == 0)
        printf("True");
    else
        printf("False");
}

int main()
{
    isRepdigit(444);
}