#include<stdio.h>

int main(){

    float fahrenheit,celsius;

    printf("enter celsius value:");
    scanf("%f",&celsius);

    fahrenheit= (0.9/0.5)*celsius+32;

    printf("%.2f",fahrenheit);






    return 0;


}