#include <stdio.h>

int main()
{

    int a, b, c, d, e;

    printf("enter first value:");
    scanf("%d", &a);

    printf("enter second value:");
    scanf("%d", &b);

    printf("enter third value:");
    scanf("%d", &c);

    printf("enter fourth value:");
    scanf("%d", &d);

    printf("enter fifth value:");
    scanf("%d", &e);

    if (a >= b, a >= c, a >= d, a >= e)
    {
        printf("first value is max %d", a);
    }

    else if (b >= c, b >= d, b >= e)
    {
        printf("second value is max %d", b);
    }

    else if (c >= d, c >= e)
    {
        printf("third value is max %d", c);
    }

    else if (d >= e)
    {
        printf(" fourth value is max %d", d);
    }

    else
    {
        printf("fifth value is max %d", e);
    }

    return 0;
}
