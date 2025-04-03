// Limit a number's value

#include <stdio.h>

double limit_number(double input_number, double lower_bound, double upper_bound)
{
    /*
    If the number falls within the range, the number should be returned.
    If the number is less than the lower limit of the range,
     the lower limit should be returned.
    If the number is greater than the upper limit of the range,
     the upper limit should be returned.

    lower bound should be less than or equal to upper bound
    */
    double result;
    if (lower_bound <= upper_bound)
    {
        if (input_number > lower_bound && input_number < upper_bound)
            result = input_number;
        else if (input_number < lower_bound)
            result = lower_bound;
        else if (input_number > upper_bound)
            result = upper_bound;
    }
    return result;
}

int main()
{
    double input_number = 4.5, lower_limit = 1, upper_limit = 10;
    printf("%.1f", limit_number(input_number, lower_limit, upper_limit));
}