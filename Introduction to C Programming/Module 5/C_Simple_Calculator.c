#include <stdio.h>
int main()
{
   long long int a, b;
    scanf("%lld%lld", &a, &b);
   long long int sum = a + b;
    printf("%lld + %lld = %lld\n", a, b, sum);
   long long int multi = a * b;
    printf("%lld * %lld = %lld\n", a, b, multi);
   long long int sub = a - b;
    printf("%lld - %lld = %lld", a, b, sub);

    return 0;
}