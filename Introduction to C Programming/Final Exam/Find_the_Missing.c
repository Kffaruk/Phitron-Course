#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        long long int result = A * B * C;
        if (result == 0)
        {
            if (M == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else if (M% result == 0)
        {
            printf("%lld\n",M / result);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}