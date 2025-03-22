// Football Points
#include <stdio.h>

int football_points(int wins, int draws, int losses)
{
    return (wins * 3) + (draws * 1) + (losses * 0);
}

int main()
{
    int wins = 3, draws = 4, losses = 2;
    printf("Football Points is %d", football_points(wins, draws, losses));
}