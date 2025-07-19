#include <stdio.h>

int main()
{
    int arr[9];
    int sum = -100, tmp = 0, jd;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int i, j, sign = 0;
    for(i = 0; i < 9; i++)
    {
        for (j = 1; j < 9; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                sign = 1;
                break;
            }
        }
        if (sign)
            break;
    }
    arr[i] = 100;
    arr[j] = 100;
    for (int id = 0; id < 9; id++)
    {
        tmp = arr[id];
        for (jd = id - 1; jd >= 0; jd--)
        {
            if (arr[jd] > tmp)
                arr[jd + 1] = arr[jd];
            else
                break;
        }
        arr[jd + 1] =tmp;
    }
    for(int in = 0; in < 7; in++)
        printf("%d\n", arr[in]);
    return (0);
}