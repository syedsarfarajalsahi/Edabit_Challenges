// Orthogonal Vector
#include <stdio.h>

void is_orthogonal(int vector1[], int vector2[])
{
    int vector_sum = 0;
    for (int i = 0; i < 3; i++)
    {
        vector_sum += vector1[i] * vector2[i];
    }
    if (vector_sum == 0)
        printf("true");
    else
        printf("false");
}

int main()
{
    int vector1[] = {1, 2, 0}, vector2[] = {2, -1, 10};
    is_orthogonal(vector1, vector2);
}