// After Nth Month
#include <stdio.h>

int after_n_months(int year, int months)
{
    return year + (months / 12);
}

int main(){
    int year = 2020, months = 96;
    printf("%d", after_n_months(year, months));
}