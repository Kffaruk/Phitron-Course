#include <stdio.h>
int main()
{
    int n,cap=0,smal=0,num=0;
    scanf("%d", &n);
    char a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c", a[i]);
        if (a[i]<=65 && a[i]>= 90)
        {
            cap++;
        }
        else if (a[i]<= 97 && a[i] >= 122)
        {
            smal ++;
        }
        else{
            num++;
        }
        
        
    }
    

    return 0;
}