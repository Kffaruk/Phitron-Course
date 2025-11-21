#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int k = 0; k < y; k++)
        {
            scanf("%d", &arr[i][k]);
        }
    }
    for (int i = 0; i < y; i++)
    {
        printf("%d ", arr[x - 1][i]);
    }
    printf("\n");
    for (int i = 0; i < x; i++)
  {
    printf("%d ", arr[i][y - 1]);
  }
    printf("\n");
    return 0;
}