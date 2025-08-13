#include <stdio.h>

double million_in_month(double first_month_paycheck, double multiplier) {
    double savings = 0;
    double paycheck = first_month_paycheck;
    int months = 0;

    while (savings <= 1000000) {
        savings += paycheck;
        months++;
        paycheck *= multiplier;
    }

    return months;
}

int main()
{
    double first_month_paycheck = 100, multiplier = 1.01;
    printf("%d", million_in_month(first_month_paycheck, multiplier));
}

/*
10, 2
10, 20+10=30, 60+30=90, 180+90=270, 540+270=810, ...
*/