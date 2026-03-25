#include <stdio.h>

int factorial(int n) {

    if(n == 0 || n == 1) {
        return 1;   
    }

    return n * factorial(n - 1);   
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial is: %d", result);

    return 0;
}