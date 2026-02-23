#include <stdio.h>

int main()
{

    int a;

    printf("enter number:\n");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {

        if (i % 2 != 0)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}