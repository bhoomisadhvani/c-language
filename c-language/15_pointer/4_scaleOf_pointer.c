

#include <stdio.h>

int main()
{

    float num;

    printf("enter a number:");
    scanf("%f",&num);

    float *ptr;

    ptr = &num;

    printf("%u\n", ptr);
    printf("%u\n", ptr + 1);

    char word='b';

    char *ptr2;

    ptr2 = &word;

    printf("%u\n", ptr2);
    printf("%u\n", ptr2 + 1);

    return 0;
}