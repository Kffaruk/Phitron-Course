#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int a=0,b=0,d=0;
    for (int i = 0; i < t; i++)
    {
        scanf("%d%d%d",&a,&b,&d);
        int sum = (a*d)/(a+b);
        int result = d-sum;
        printf("%d\n", result);
    }
    
    return 0;
}