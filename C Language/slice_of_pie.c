// Slice of Pie
#include <stdio.h>

void equalSlices(int total_slices, int no_recipients, int slices_each)
{
    if (total_slices >= no_recipients * slices_each)
        printf("true");
    else if (no_recipients == 0)
        printf("true");
    else
        printf("false");
}

int main()
{
    int total_slices = 24, no_recipients = 0, slices_each = 2;
    equalSlices(total_slices, no_recipients, slices_each);
}