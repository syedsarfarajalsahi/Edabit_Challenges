// Which Generation are you?

#include <stdio.h>

/*
Generation  Male                Female
-3	        great grandfather	great grandmother
-2	        grandfather	        grandmother
-1	        father	            mother
0	        me!	                me!
1	        son	                daughter
2	        grandson	        granddaughter
3	        great grandson	    great granddaughter
*/
void generation(int generation, char male_or_female)
{
    if (male_or_female == 'm')
    {
        switch (generation)
        {
        case -3:
            printf("great grandfather");
            break;
        case -2:
            printf("grandfather");
            break;
        case -1:
            printf("father");
            break;
        case 0:
            printf("me!");
            break;
        case 1:
            printf("son");
            break;
        case 2:
            printf("grandson");
            break;
        case 3:
            printf("great grandson");
            break;
        default:
            break;
        }
    }
    else if (male_or_female == 'f')
    {
        switch (generation)
        {
        case -3:
            printf("great grandmother");
            break;
        case -2:
            printf("grandmother");
            break;
        case -1:
            printf("mother");
            break;
        case 0:
            printf("me!");
            break;
        case 1:
            printf("daughter");
            break;
        case 2:
            printf("granddaughter");
            break;
        case 3:
            printf("great granddaughter");
            break;
        default:
            break;
        }
    }
}

int main()
{
    int number_of_generation = 1;
    char male_or_female = 'f';
    generation(number_of_generation, male_or_female);
}