#include <stdio.h>

int main()
{
    int a, first, last, add;

    printf("Enter any number: ");
    scanf("%d", &a);

    last = a % 10;   

    while (a >= 10)
    {
        a= a / 10;
    }

    first = a;      

    add = first + last;

    printf("addition of  digit: %d", add);

    return 0;
}

