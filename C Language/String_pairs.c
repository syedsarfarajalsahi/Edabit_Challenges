// String Pairs
#include <stdio.h>
#include <string.h>

void string_pairs(char given_string[]) {
    int length = strlen(given_string);
    char split[50][3];
    int index = 0;

    for (int i = 0; i < length; i += 2) {
        split[index][0] = given_string[i];
        split[index][1] = (i + 1 < length) ? given_string[i + 1] : '*';
        split[index][2] = '\0';
        index++;
    }

    for (int i = 0; i < index; i++) {
        printf("%s\t", split[i]);
    }
}

int main() {
    char str[] = "Hello";
    string_pairs(str);
    return 0;
}


/*
I don't really understand but i just did it with the help from ChatGPT.
*/