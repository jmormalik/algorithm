#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i <= n; i++)
    {
        if (i != 0 && i != n)
        {
            for(int j = 0; j < i; j++)
                printf(" ");
        }
        for (int j = n - i; j > 0; j--)
            printf("*");
        if (i != n)
            printf("\n");
    }
    return (0);
}