#include <stdio.h>

int main()
{
    int num[3];
    int tmp, j;
    for(int i = 0; i < 3; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i < 3; i++)
	{
		tmp = num[i];
		for(j = i - 1; j >= 0; j--)
		{
			if (num[j] > tmp)
				num[j + 1] = num[j];
			else
				break;
		}
		num[j + 1] = tmp;
	}
	for (int i = 0; i < 3; i++)
		printf("%d ", num[i]);
	return(0);
}