// Hold Your Breath!
#include <stdio.h>

void diving_minigame(int altitudes[], int size)
{
    int breath_meter = 10;
    for (int i = 0; i < size; i++)
    {
        if (altitudes[i] < 0)
        {
            breath_meter -= 2;
        }
        else
        {
            breath_meter += 4;
            if (breath_meter > 10)
                breath_meter = 10;
        }

        if (breath_meter <= 0){
            printf("false");
            return;
        }
    }
    printf("true");
}

int main()
{
    int diving_altitude[] = {2, 1, 2, 1, -3, -4, -5, -3, -4}, size;
    size = sizeof(diving_altitude) / sizeof(diving_altitude[0]);
    diving_minigame(diving_altitude, size);
}