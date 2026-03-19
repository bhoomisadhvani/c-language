#include <stdio.h>

int main()
{
    // Static modification
    char a[] = {'j','u','h','i','\0'}; 

    printf("%s\n", a);  

    a[2] = 's';        

    printf("%s\n", a);  

    // Dynamic modification
    char b[] = "juhi";

    printf("%s\n", b);

    b[1] = 'o';  

    printf("%s\n", b);

    return 0;
}