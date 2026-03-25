#include <stdio.h>

int even(int num) {
    if(num % 2 == 0) 
    {
        return 1;   
    } 
    else 
    {
        return 0; 
    }
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = even(num);

    if(result == 1) 
    {
        printf("Number is Even");
    } 
    else 
    {
        printf("Number is Odd");
    }

    return 0;
}