// Calculating Damage
#include <stdio.h>
#include <string.h>

int damage_taken(int damage, int speed, char time[])
{
    if (damage < 0 || speed < 0)
        return 0;
    else if (strcmp(time, "second") == 0)
        return damage * speed;
    else if (strcmp(time, "minute") == 0)
        return damage * speed * 60;
    else if (strcmp(time, "hour") == 0)
        return damage * speed * 3600;
}

int main()
{
    int damage = 2, speed = 2;
    char time[] = "hour";
    printf("%d", damage_taken(damage, speed, time));
}