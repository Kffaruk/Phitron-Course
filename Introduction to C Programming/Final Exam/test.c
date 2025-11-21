#include <stdio.h>
int main()
{  
    int n,m;
    scanf("%d %d", &n,&m);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    if (n !=m)
    {
        printf("NO\n");
        return 0;
    }
    int value =1;
    for (int i=  0; i < n ;i++)
    {
        if (a[i][i] != 1)
        {
            value = 0;
            break;
        }
        
    }
    for (int i = 0; i < n && value; i++)
    {
        int j = n -1 -i;
        if (a[i][j] != 1)
        {
            value = 0;
        }
        
    }
    for (int i = 0; i < n && value; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j)
            {
            continue;
            }
            if (i + j == n - 1)
            {
            continue;
            }
            if (a[i][j] != 0) {
                value = 0;
                break;
            }
        }
    }

    if (value)
    {
     printf("YES\n");
    }
    else
    {
     printf("NO\n");
    }

    return 0;
}