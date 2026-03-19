#include <stdio.h>

int main()
{

//  static insertation

    char a[5];
    a[0] = 'h';
    a[1] = 'y';
    a[2] = 'y';
    a[3] = 'g';
    a[4] = 'm';

    printf("%c", a[0]);
    printf("%c", a[1]);
    printf("%c", a[2]);
    printf("%c", a[3]);
    printf("%c", a[4]);

    //  insertation dynamic

    char b[5];

    printf("\nenter element: ");
    scanf("%s",&b);
    

    printf("%s", b);
   

    return 0;
}
