#include <stdio.h>

int main()
{
    // Static iteration
    char a[] = {'g', 'o', 'o', 'd', '\0'};  
    printf("%s", a);

    // Dynamic iteration
    char b[15];

    printf("\nEnter your string: ");

    for(int i = 0; i < 14; i++)  
    {
        scanf(" %c", &b[i]); 

        

        printf("%c", b[i]);  
    }

    return 0;
}