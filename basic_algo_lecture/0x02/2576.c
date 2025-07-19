#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    int tmp = 0;
    for(int i = 0; i < 7; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 1)
        {
            sum += num;
            if (!tmp)
                tmp = num;
            else if (num < tmp)
                tmp = num;
        }
    }
    if (!sum)
        printf("-1");
    else
    {
        printf("%d\n", sum);
        printf("%d", tmp);
    }
    return (0);
}