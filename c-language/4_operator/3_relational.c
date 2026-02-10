#include <stdio.h>

int main()
{

    int a, b;

    printf("enter a number:");
    scanf("\n %d", &a);

    printf("enter b number:");
    scanf("\n %d", &b);

    printf(" \ngreater than %d", a > b);

    printf("\n less than%d", a < b);

    printf("\n greater or equal %d", a >= b);

    printf("\n less or equal %d", a <= b);

    printf("\nequal %d", a == b);

    printf("\nnot equal %d", a != b);

    return 0;
}