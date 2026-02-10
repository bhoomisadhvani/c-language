#include <stdio.h>

int main()
{

    int a, b;

    printf("enter a number:");
    scanf("\n %d", &a);

    printf("enter b number:");
    scanf("\n %d", &b);

    printf("\n AND %d", a&&b);

    printf("\n OR %d", a || b);

    

    return 0;
}