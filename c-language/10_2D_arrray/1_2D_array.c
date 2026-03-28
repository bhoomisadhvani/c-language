#include <stdio.h>

int main()
{
    int a[3][3] = {
        {50, 70, 60},
        {30, 80, 20}
    };

    printf("%d ", a[0][0]);
    printf("%d ", a[0][1]);
    printf("%d ", a[0][2]);

    printf("\n");

    printf("%d ", a[1][0]);
    printf("%d ", a[1][1]);
    printf("%d ", a[1][2]);

    return 0;
}