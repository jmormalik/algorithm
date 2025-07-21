#include <stdio.h>

int main()
{
    unsigned long long num,sum = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%llu", &num);
        if (i == 0)
            sum = num;
        else
            sum *= num;
    }
    int    result[10] = {0};
    while (sum)
    {
        result[sum % 10]++;
        sum /= 10;
    } 
    for (int i = 0; i < 10; i++)
        printf("%d\n", result[i]);
    return (0);
}