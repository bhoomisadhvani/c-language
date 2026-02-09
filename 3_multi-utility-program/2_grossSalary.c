#include<stdio.h>

int main(){


    float bs,hra,da,ta,grosSalary;

    printf("enter your base salary:");
    scanf("%f",&bs);

     printf("enter your hra:");
    scanf("%f",&hra);

     printf("enter your da:");
    scanf("%f",&da);

     printf("enter your ta:");
    scanf("%f",&ta);

    grosSalary= bs * ( 1 + (hra + da + ta) / 100);

    printf("%.2f",grosSalary);






    return 0;
}