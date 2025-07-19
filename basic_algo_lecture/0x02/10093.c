#include <stdio.h>

int main()
{
    unsigned long long a, b, i;
    scanf("%llu %llu", &a, &b);
    if (b > a && b - a != 1)
    {
        printf("%llu\n", b - a - 1);
        for (i = a + 1; i < b; i++)
            printf("%llu ", i);
    }
    else if (a > b && a - b != 1)
    {
        printf("%llu\n", a - b - 1);
        for (i = b + 1; i < a; i++)
            printf("%llu ", i);
    }
    else
    {
        printf("0");
    }
    return (0);
}