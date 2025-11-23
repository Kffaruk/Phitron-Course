#include <stdio.h>
int main()
{  
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0, sum1 = 0;
    for (int i = 0; i < n; i++)
    if (a[i] > 0)
    {
        sum = sum+a[i];
    }
    else if (a[i] < 0)
    {
        sum1=sum1+a[i];
    }
    printf("%d %d", sum, sum1);
    
    return 0;
}