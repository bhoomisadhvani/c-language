#include<stdio.h>

int main(){


    int t1,t2,t3;

    printf("enter first angle:");
    scanf("%d",&t1);

    printf("\nenter second angle:");
    scanf("%d",&t2);

    t3= 180 - (t1+t2);

    printf("\nthird angle is %d",t3);
    
    



    return 0;

}