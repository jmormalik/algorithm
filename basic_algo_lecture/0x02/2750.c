#include <stdio.h>

int	main(void)
{
	int	n, j, tmp;
	scanf("%d", &n);
	int	num[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for (int i = 1; i < n; i++)
	{
		tmp = num[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (num[j] > tmp)
				num[j + 1] = num[j];
			else
				break;
		}
		num[j + 1] = tmp;
	}
	int i = 0;
	while(i < n)
	{
		printf("%d\n", num[i]);
		i++;
	}
	return (0);
}
