// H4ck3r Sp34k
#include <stdio.h>
#include <string.h>

// "a"s with 4, "e"s with 3, "i"s with 1, "o"s with 0, and "s"s with 5
void hacker_speak(char *given_statement)
{
    for (int i = 0; given_statement[i] != '\0'; i++)
    {
        switch (given_statement[i])
        {
        case 'a':
        case 'A':
            printf("4");
            break;
        case 'e':
        case 'E':
            printf("3");
            break;
        case 's':
        case 'S':
            printf("5");
            break;
        case 'i':
        case 'I':
            printf("1");
            break;
        case 'o':
        case 'O':
            printf("0");
            break;
        default:
            printf("%c", given_statement[i]);
        }
    }
}

int main()
{
    hacker_speak("javascript is cool\n");
    hacker_speak("programming is fun\n");
    hacker_speak("become a coder");
}