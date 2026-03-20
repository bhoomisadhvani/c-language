#include<stdio.h>
#include<string.h>

int main(){
    
    char str[10];
    int length;
    
    printf("enter string:");
    scanf("%s",&str);
    
   length= strlen(str);
    
    printf("length is %d",length);
    
    
    
    
    return 0;
}