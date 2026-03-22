#include<stdio.h>
#include<string.h>

int main(){


    char str1[15];
    char str2[15];
    
    printf("enter first string:");
    scanf("%s",&str1);
    
    printf("enter first string:");
    scanf("%s",&str2);


    strcat(str1,str2);

    printf("concate :%s",str1);


    return 0;
}