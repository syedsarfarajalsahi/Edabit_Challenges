// Hurdle Jumps
#include <stdio.h>

void hurdle_jump(int hurdle_heights[], int size, int jumper_jump_height) {
    int max_hurdle = 0;
    for (int i = 0; i < size; i++) {
        if (hurdle_heights[i] > max_hurdle) {
            max_hurdle = hurdle_heights[i];
        }
    }

    if (jumper_jump_height >= max_hurdle)
        printf("true\n");
    else
        printf("false\n");
}

int main() {
    int hurdle_heights[] = {1, 2, 3, 4, 5};
    int size = sizeof(hurdle_heights) / sizeof(hurdle_heights[0]);
    hurdle_jump(hurdle_heights, size, 4);
}