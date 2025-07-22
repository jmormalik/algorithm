#include <stdio.h>

int main()
{
    int n, num[10001] = {0}, d;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d);
        num[d]++;
    }
    for (int i = 0; i < 10001; i++)
    {
            while(num[i])
            {
                printf("%d\n", i);
                num[i]--;
            }
    }
    return (0);
}