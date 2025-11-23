#include <stdio.h>
int main()
{
    // char a[14];
    // scanf("%s", &a);
    // printf("%c", a[1]);

    char a[50];
    fgets(a,9,stdin);
    printf("%s", a);


    return 0;
}