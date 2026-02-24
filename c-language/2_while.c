#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 0;

    while (i < 500)
    {
        sum += i;
        i++;
    }

    printf("%d\n", sum);

    return 0;
}