#include <stdio.h>

int main()
{
    int a, count = 0;

    printf("Enter any number: ");
    scanf("%d", &a);

    while (a != 0)
    {
        a = a / 10;
        count++;
    }

    printf(" digits: %d", count);

    return 0;
}

