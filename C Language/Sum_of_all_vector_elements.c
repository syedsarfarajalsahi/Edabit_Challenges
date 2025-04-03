// Get the sum of all the vector elements
#include <stdio.h>

int get_sum_of_vector_elements(int vector[3])
{
    int sum=0;
    for(int i;i<3;i++){
        sum += vector[i];
    }
    return sum;
}

int main()
{
    int vector[3] = {-2, 84, 23};
    printf("%d", get_sum_of_vector_elements(vector));
}