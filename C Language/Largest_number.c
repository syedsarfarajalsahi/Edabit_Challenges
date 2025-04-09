// Largest numbers
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

void largest_numbers(int n, const int arr[], int size) {
    if (arr == NULL || size <= 0 || n <= 0) {
        printf("Invalid input.\n");
        return;
    }

    if (n > size) {
        printf("Requested count exceeds array size. Showing top %d elements instead:\n", size);
        n = size;
    }

    bool selected[size];  // Track which elements are already picked
    for (int i = 0; i < size; i++)
        selected[i] = false;

    printf("Top %d largest number(s):\n", n);
    for (int count = 0; count < n; count++) {
        int max = INT_MIN;
        int maxIndex = -1;

        for (int i = 0; i < size; i++) {
            if (!selected[i] && arr[i] > max) {
                max = arr[i];
                maxIndex = i;
            }
        }

        if (maxIndex != -1) {
            selected[maxIndex] = true;
            printf("%d\t", arr[maxIndex]);
        }
    }

    printf("\n");
}

int main() {
    int num_array[] = {14, 12, 57, 11, 18, 16};
    int size = sizeof(num_array) / sizeof(num_array[0]);

    largest_numbers(3, num_array, size);

    return 0;
}
