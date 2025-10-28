#include <stdio.h>
int main()
{
    long long int a, b, c, d, result;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    result = (a * b) - (c * d);
    printf("Difference = %lld", result);
    return 0;
}