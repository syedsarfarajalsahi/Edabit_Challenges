#include <stdio.h>

int box_sequence(int step)
{
    int number_of_boxes = 0;
    for (int i = 1; i <= step; i++)
    {
        if (i % 2 == 1)
            number_of_boxes += 3;
        else
            number_of_boxes -= 1;
    }
    return number_of_boxes;
}

int main()
{
    int step = 9;
    printf("%d", box_sequence(step));
}

// 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13