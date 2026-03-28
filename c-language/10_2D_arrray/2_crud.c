#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int pos, value;

    printf("Array Elements:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    
    printf("\nEnter position to update (0-4): ");
    scanf("%d", &pos);

    printf("Enter new value: ");
    scanf("%d", &value);

    if(pos >= 0 && pos < 5)
        a[pos] = value;

    printf("After Update:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    
    printf("\nEnter position to delete (0-4): ");
    scanf("%d", &pos);

    if(pos >= 0 && pos < 5)
    {
        for(int i = pos; i < 4; i++)
            a[i] = a[i + 1];
    }

    printf("After Deletion:\n");
    for(int i = 0; i < 4; i++)
        printf("%d ", a[i]);

    return 0;
}