

#include <stdio.h>

int main()
{
    // static array
    
    int num1[2][2] = {{1, 2},
                      {3, 4}};

    printf("%d\n", num1[1][1]); 

    // dynamic array
    
    int num2[3][3];

    printf("Enter 9 elements:\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("enter element on index number [%d][%d]:",i,j);
            scanf("%d", &num2[i][j]);
        }
    }

    printf("\nMatrix is:\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", num2[i][j]);
        }
        printf("\n");
    }

    return 0;
}