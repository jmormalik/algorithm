#include <stdio.h>

int main()
{
    int n;
    int msum = 0, ysum = 0;
    scanf("%d", &n);
    int num;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        ysum += ((num / 30) + 1) * 10;
        msum += ((num / 60) + 1) * 15;
    }
    if (msum < ysum)
        printf("M %d", msum);
    else if (ysum < msum)
        printf("Y %d", ysum);
    else
        printf ("Y M %d", ysum);
    return (0);
}