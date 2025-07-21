#include <stdio.h>

int main()
{
    int card[20] = {0};
    for(int i = 0; i < 20; i++)
        card[i] += i + 1;
    int a,b, tmp = 0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d %d", &a, &b);
        a -= 1;
        b -= 1;
        while (a <= b)
        {
            tmp = card[a];
            card[a] = card[b];
            card[b] = tmp;
            a++;
            b--;
        }
    }
    for (int i = 0; i < 20; i++)
        printf("%d ", card[i]);
    return (0);
}