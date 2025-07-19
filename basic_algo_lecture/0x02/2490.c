#include <stdio.h>

int main()
{
    int sum = 0, num;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &num);
            sum += num;
        }
        if (sum == 4)
            printf("E\n");
        else if (sum == 3)
            printf("A\n");
        else if (sum == 2)
            printf("B\n");
        else if (sum == 1)
            printf("C\n");
        else
            printf("D\n");
    }
    return (0);
}