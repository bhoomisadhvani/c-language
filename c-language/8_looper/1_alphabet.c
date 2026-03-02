#include<stdio.h>

int main(){
 
    char a,i;
    
    printf("enter starting value:");
    scanf("%c",&a);
    
    i=a;

    do
    {
        printf("%c ",i);
        i=i+4;
    } 
    while (i<='z');



    return 0;
}
