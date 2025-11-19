#include <stdio.h>
#include <string.h>

int palindrome(char S[])
{
    int l = 0;
    int r= strlen(S)-1;

    while (l< r)
    {
        if (S[l] != S[r])
        {
            return 0;
        } 
        l++;
        r--;
    }
    return 1; 
}

int main()
{
    char S[1001];
    scanf("%s",S);
    int output = palindrome(S);
    if (output== 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}