#include <stdio.h>

int just_another_sum_problem(int first_term, int last_term)
{
    int min_term = (first_term < last_term) ? first_term : last_term;
    int max_term = (first_term > last_term) ? first_term : last_term;
    int lenght = max_term - min_term + 1;
    int sum = ((lenght) * (min_term + max_term))/2;
    return sum;
}

int main()
{
    int sum_1 = just_another_sum_problem(90, 45);
    printf("%d\n", sum_1);
    int sum_2 = just_another_sum_problem(-10, 1);
    printf("%d\n", sum_2);
    int sum_3 = just_another_sum_problem(-20, 5);
    printf("%d", sum_3);
}