// Largest numbers
#include <stdio.h>

void sort_array(int num_arr[], int size)
{
    if (num_arr == NULL || size <= 0) return;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (num_arr[j] > num_arr[j + 1]) {
                int temp = num_arr[j];
                num_arr[j] = num_arr[j + 1];
                num_arr[j + 1] = temp;
            }
        }
    }
}

void largest_numbers(int n, int num_arr[], int size)
{
    if (num_arr == NULL || size <= 0 || n <= 0) {
        printf("Invalid input.\n");
        return;
    }

    if (n > size) {
        printf("Requested count exceeds array size. Showing top %d elements instead:\n", size);
        n = size;
    }

    sort_array(num_arr, size);

    printf("Top %d largest number(s):\n", n);
    for (int i = size - n; i < size; i++) {
        printf("%d\t", num_arr[i]);
    }
    printf("\n");
}

int main()
{
    int num_array[] = {14, 12, 57, 11, 18, 16};
    int size = sizeof(num_array) / sizeof(num_array[0]);

    largest_numbers(3, num_array, size);

    return 0;
}
