#include<stdio.h>

int sub(int a, int b){
    return a - b;
}

int main(){
    int result = sub(19, 30);
    printf("%d", result);
    return 0;
}