#include <stdio.h>

int Length(char str[]) {
    int i = 0;

    while(str[i] != '\0') {
        i++;
    }

    return i;
}

int main() {
    char str[100];
    int result;

    printf("Enter any string: ");
    scanf("%s", str);

    result = Length(str);

    printf("Length is: %d", result);

    return 0;
}