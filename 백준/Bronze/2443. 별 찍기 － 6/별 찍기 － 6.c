#include <stdio.h>

int main()
{
    int n , s = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i != 1)
        {
            s += 2;
            for(int p = 1; p < i; p++)
                printf(" ");
        }
        for(int j = (2 * n - s); j > 0; j--)
            printf("*");
        if (i != n)
            printf("\n");
    }
    return (0);
}