// Number of Sticker on Rubik's Cube with side length
#include <stdio.h>

int how_many_stickers(int side_length)
{
    return (side_length * side_length) * 6;
}

int main()
{
    int side_length = 456;
    printf("Number of stickers needed for 3X3 Rubik's Cube is %d", how_many_stickers(side_length));
}