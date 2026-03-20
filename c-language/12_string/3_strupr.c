#include<stdio.h>
#include<ctype.h>

int main(){
    
    char str1[10];
    
    printf("Enter string: ");
    scanf("%s", str1);
    
    for(int i = 0; str1[i] != '\0'; i++){
        str1[i] = toupper(str1[i]);
    }
    
    printf("Upper case is %s", str1);
    
    return 0;
}