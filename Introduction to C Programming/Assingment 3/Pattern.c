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


        }
        int cnt = 2 * i - 1;
        for (int j = 0; j < cnt; j++)
        {
<<<<<<< HEAD
            printf("%c", c);
=======
            printf("%c", ch);
>>>>>>> 39386d0 (Added Assingnment 3)
        }

        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--)
    {
        for (int k = 0; k < N - i; k++)
        {
            printf(" ");
        }
<<<<<<< HEAD
        char c;
        if (i % 2 == 1)
        {
            c = '#';
        }
        else
        {
            c = '-';
=======

        char ch;
        if (i % 2 == 1)
        {
            ch = '#';
        }
        else
        {
            ch = '-';
>>>>>>> 39386d0 (Added Assingnment 3)
        }
        int cnt = 2 * i -1;
        for (int i = 0; i < cnt; i++)
        {
<<<<<<< HEAD
            printf("%c", c);
        }
=======
            printf("%c", ch);
        }

>>>>>>> 39386d0 (Added Assingnment 3)
        printf("\n");
    }

    return 0;
}