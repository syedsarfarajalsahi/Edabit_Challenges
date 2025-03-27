// I'd Like a New Shade of Blue, Please
#include <stdio.h>

int how_many_walls(int n, int w, int h)
{
    return n / (w * h);
}

int main()
{
    int n = 41, w = 3, h = 6;
    printf("%d", how_many_walls(n, w, h));
}