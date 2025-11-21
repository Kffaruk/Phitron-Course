#include <stdio.h>
int main()
{  
    int N;
    scanf("%d", &N);
    int height = (N + 11)/2;
    int st = 1;
    int sp = height;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <sp-1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < st; j++)
        {
            printf("*");
        }
        st +=2;
        sp--;
        printf("\n");
  
    }
    int ts = height -((N+1)/2);
    for (int i = 0; i < 5; i++)
    {
        for (int k= 0; k < ts; k++)
        {
            printf(" ");
        }
        for (int j = 0;j < N; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}