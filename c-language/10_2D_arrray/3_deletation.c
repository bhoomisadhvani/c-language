#include <stdio.h>

int main()
{
    int num[5] = {50,40,30,20,10};

    

    int pos = 2;  

    for(int i = pos; i < 4; i++)
    {
        num[i] = num[i + 1];
    }

    printf("deletion:\n");

    for(int i = 0; i < 4; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}