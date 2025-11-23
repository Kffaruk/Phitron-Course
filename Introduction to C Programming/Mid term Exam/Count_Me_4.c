#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", &s);
    int ay[26]={0};
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        int idx=s[i] -'a';
        ay[idx]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (ay[i] > 0)
    printf("%c -%d\n", i + 'a', ay[i]);
        
    }
    
    return 0;
}