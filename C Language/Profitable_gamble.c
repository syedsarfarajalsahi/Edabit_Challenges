// Profitable Gamble
#include <stdio.h>

void profitableGamble(float probability_of_winning, float prize, float cost_of_playing)
{
    if (probability_of_winning * prize > cost_of_playing)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}

int main()
{
    float probability_of_winning = 0.2, prize = 50, cost_of_playing = 9;
    profitableGamble(probability_of_winning, prize, cost_of_playing);
}