// Area of a Rectangle
#include <stdio.h>

int area_of_the_rectangle(int length, int breadth)
{
    if (length * breadth > 0)
    {
        return length * breadth;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int length = -3, breadth = 4;
    printf("Area of the Rectangle is %d", area_of_the_rectangle(length, breadth));
}