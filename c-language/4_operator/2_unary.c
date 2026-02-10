#include <stdio.h>

int main()
{

    int a;

    printf("enter a number:");
    scanf("%d", &a);

    //   pre increment

    printf("\npre increment %d", ++a);

    //   pre decrement

    printf("\npre decrement %d", --a);

    //   post increment

    printf("\npost increment %d", a++);
    printf(" \npost increment value %d", a);

    //   post decrement

    printf("\npost decrement %d", a--);
    printf(" \npost decrement value %d", a);

    return 0;
}