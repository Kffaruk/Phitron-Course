#include <stdio.h>
int main()
{  
   long long int n,max = 0;
    scanf("%lld", &n);
   long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    printf("%lld", max);
    
    return 0;
}