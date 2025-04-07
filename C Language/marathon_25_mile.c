// 25-mile Marathon

#include <stdio.h>

void marathon_distance(int *array)
{
    int i = 0, sum = 0;
    if (array[0] == -1)
        printf("false");
    while (array[i] != -1)
    {
        sum += (array[i] < 0) ? -array[i] : array[i];
        i++;
    }

    printf("%s", (sum == 25) ? "true" : "false");
}

int main()
{
    int num_array[] = {1, 9, 5, 8, 2, -1};
    // here i used sentinel value
    marathon_distance(num_array);
}