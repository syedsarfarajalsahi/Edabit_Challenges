// Frame per second
#include <stdio.h>

int frames(int minutes, int frames_per_second)
{
    return 60 * minutes * frames_per_second;
}

int main()
{
    int minutes = 10, frames_per_second = 25;
    printf("%d", frames(minutes, frames_per_second));
}