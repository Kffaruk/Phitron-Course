#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int N;
        scanf("%d", &N);
        int a[N], b[N],c[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (b[i] > b[j])
            {
                int tem = b[i];
                b[i] = b[j];
                b[j] = tem;
            }
        }
    }
  
        for (int k = 0; k < N; k++)
            if (a[k] > b[k])
            {
                c[k] = a[k] - b[k];
            }
            else
            {
                c[k] = b[k] - a[k];
            }
        

        for (int j = 0; j < N; j++)
        {
            printf("%d ", c[j]);
        }
        printf("\n");
    }
    return 0;
}