// Is the Array empty?
#include <stdio.h>

void is_empty(int array[])
{
    int size_of_the_array = sizeof(array) / sizeof(array[0]);
    if (size_of_the_array == 0)
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
    int num_arr[] = {};
    is_empty(num_arr);
}


/*
I have some problem with this code:

Is_the_array_empty.c: In function 'is_empty':
Is_the_array_empty.c:6:35: warning: 'sizeof' on array function parameter 'array' will return size of 'int *' [-Wsizeof-array-argumen 
]
    6 |     int size_of_the_array = sizeof(array) / sizeof(array[0]);
      |                                   ^
Is_the_array_empty.c:4:19: note: declared here
    4 | void is_empty(int array[])
      |               ~~~~^~~~~~~
Is_the_array_empty.c: In function 'main':
Is_the_array_empty.c:20:5: warning: 'is_empty' accessing 4 bytes in a region of size 0 [-Wstringop-overflow=]
   20 |     is_empty(num_arr);
      |     ^~~~~~~~~~~~~~~~~
Is_the_array_empty.c:20:5: note: referencing argument 1 of type 'int *'
Is_the_array_empty.c:4:6: note: in a call to function 'is_empty'
    4 | void is_empty(int array[])
      |      ^~~~~~~~


I'll fix this later. For now, let it be as i can atleast get the output.

*/