#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        
        for (int k = 0; k < N - i; k++)
        {
            printf(" ");
        }

        char c;
        if (i % 2 == 1)
        {
            c = '#';
        }
        else
        {
            c = '-';
        }
        int cnt = 2 * i - 1;
        for (int j = 0; j < cnt; j++)
        {
            printf("%c", c);
        }

        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--)
    {
        for (int k = 0; k < N - i; k++)
        {
            printf(" ");
        }
        char c;
        if (i % 2 == 1)
        {
            c = '#';
        }
        else
        {
            c = '-';
        }
        int cnt = 2 * i -1;
        for (int i = 0; i < cnt; i++)
        {
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}