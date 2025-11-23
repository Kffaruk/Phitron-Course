#include <stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        char a[10001];
        scanf("%s", a);

        int  cap = 0, smal = 0, num = 0;

        int len = strlen(a);
        for (int i = 0; i < len; i++)
        
        {

            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                cap++;
            }
            else if (a[i] >= 'a' && a[i] <= 'z')
            {
                smal++;
            }
            else if (a[i] >= '0' && a[i] <= '9')
            {
                num++;
            }
        }

        printf("%d %d %d\n", cap, smal, num);
    }

    return 0;
}