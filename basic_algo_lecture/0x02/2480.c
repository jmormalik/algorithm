#include <stdio.h>

int main()
{
    int dice[3];
    int tmp = 0;
    int sign = 0;
    int j;
    for (int i = 0; i < 3; i++)
        scanf("%d", &dice[i]);
    for (int i = 0; i < 3; i++)
    {
        tmp = dice[i];
        for(j = i - 1; j >= 0; j--)
        {
            if (dice[j] >tmp)
                dice[j + 1] = dice[j];
            else if (dice[j] == tmp)
            {
                sign += 1;
                break;
            }
            else
                break;
        }
        dice[j + 1] = tmp;
    }
    if (sign == 2)
        printf("%d", 10000 + (dice[0] * 1000));
    else if (sign == 1)
        printf("%d", 1000 + (dice[1] * 100));
    else
        printf("%d", dice[2] * 100);
    return (0);
}