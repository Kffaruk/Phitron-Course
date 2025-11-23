#include <stdio.h>
#include <string.h>
int main()
{
  char a[100001];
  scanf("%s", a);
  int b = 0;
  int l = strlen(a);
  for (int i = 0; i < l; i++)
  {
    if (a[i] != 'a'&& a[i] != 'e'&&a[i] != 'i'&& a[i] != 'o'&& a[i] != 'u')
  {
        b++;
  }
    
  }
  printf("%d",b);
  
    return 0;
}