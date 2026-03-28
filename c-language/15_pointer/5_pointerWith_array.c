

#include <stdio.h>

int main()
{
    
    int num[] = {1, 2, 3, 4, 5};

    int *ptr;

    printf("%d\n", num[2]);

    ptr = num;

    // printf("%u", *ptr);

    for (int i = 0; i < 5; i++)
    {

        printf("%u=>%d\n", ptr + i, *(ptr + i));
    }

    return 0;
}