#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // min
    if (a <= b && c >= a)
    {
        printf("%d ", a);
    }
    else if (b <= a && c >= b)
    {
        printf("%d ", b);
    }
    else if (c <= a && b >= c)
    {
        printf("%d ", c);
    }

    // max
    if (a >= b && c <= a)
    {
        printf("%d", a);
    }
    else if (b >= a && c <= b)
    {
        printf("%d", b);
    }
    else if (c >= a && b <= c)
    {
        printf("%d", c);
    }


    return 0;
}