#include <stdio.h>

int main()
{

    int a;

    printf("Enter age:\n");
    scanf("%d", &a);

    if (a <= 18)
    {
        goto not;
    }
    else
    {
        goto eligible;
    }

eligible:
    printf("\nYou are eligible\n");
    return 0;

not:
    printf("\nYou are not eligible\n");
    return 0;
}