// Chinese Zodiac
#include <stdio.h>

void chinese_zodiac(int year)
{
    switch (year % 12)
    {
    case 0:
        printf("Monkey");
        break;
    case 1:
        printf("Rooster");
        break;
    case 2:
        printf("Dog");
        break;
    case 3:
        printf("Pig");
        break;
    case 4:
        printf("Rat");
        break;
    case 5:
        printf("Ox");
        break;
    case 6:
        printf("Tiger");
        break;
    case 7:
        printf("Rabbit");
        break;
    case 8:
        printf("Dragon");
        break;
    case 9:
        printf("Snake");
        break;
    case 10:
        printf("Horse");
        break;
    case 11:
        printf("Sheep");
        break;
    default:
        printf("Invalid input");
    }
}

int main()
{
    int year = 1933;
    chinese_zodiac(year);
}