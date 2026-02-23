#include <stdio.h>

int main() {

    int a,b,c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf(" \n1 addition");
    printf("\n2 subtraction");
   

    printf("\nchoose a operator:\n");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
      c=a+b;
      printf("addition is %d",c);
        break;

     case 2:
      c=a-b;
      printf("subtraction is %d",c);
        break;

    
     default:
     printf("invalid number");
        break;
    }

    return 0;



  
}