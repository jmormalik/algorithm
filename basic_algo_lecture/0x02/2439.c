#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
            continue;
        if (n != 1)
        {
            for (int j = n - i; j >= 0; j--)
                printf(" ");
        }
        for(int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return (0);
}