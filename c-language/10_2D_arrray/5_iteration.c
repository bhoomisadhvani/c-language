#include <stdio.h>

int main()
{

    // static iteration

    int a[2][2] = {{1, 2},
                   {3, 4}};

    printf(" %d", a[0][0]);
    printf(" %d\n", a[0][1]);
    printf(" %d", a[1][0]);
    printf(" %d", a[1][1]);

    // dynamic iteration

    int b[2][2] = {{1, 2},
                   {3, 4}};


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\n%d\n", b[i][j]);
        }
    }

    return 0;
}