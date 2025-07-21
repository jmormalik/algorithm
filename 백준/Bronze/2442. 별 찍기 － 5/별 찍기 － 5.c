#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
            printf(" ");
        for (int j = (2 * i - 1); j > 0; j--)
            printf("*");
        if(i != n)
            printf("\n");
    }
    return (0);
}