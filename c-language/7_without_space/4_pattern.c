
// 11111
// 2222
// 333
// 44
// 5

#include <stdio.h>

int main()
{

    int n;

    printf("enter number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}