#include <stdio.h>

int main()
{
    unsigned long long n, a, b;
    scanf("%llu", &n);
    unsigned long long sum[n];
    for (unsigned long long i = 0; i < n; i++)
    {
        scanf("%llu %llu", &a, &b);
        sum[i] = a + b;
    }
    for (unsigned long long i = 0; i < n; i++)
        printf("%llu\n", sum[i]);
    return(0);
}