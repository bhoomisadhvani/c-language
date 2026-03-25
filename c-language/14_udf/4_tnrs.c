#include <stdio.h>

int sum() 
{
    int a, b;
    
    printf("Enter 1 numbers: ");
    scanf("%d",&a);

    printf("Enter 2 numbers: ");
    scanf("%d",&b);


    return a + b;
}

int main() {
    int add;

    add = sum();

    printf("Sum is: %d", add);

    return 0;
}