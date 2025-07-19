#include <stdio.h>

int	main(void)
{
	int	n,k,tmp;
	scanf("%d %d", &n, &k);
	int	num[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for (int i = 1; i < n; i++)
	{
		tmp = num[i];
		int j = i - 1;
		while (j >= 0 && num[j] < tmp)
		{
			num[j + 1] = num[j];
			j--;
		}
		num[j + 1] = tmp;
	}
	printf("%d", num[k - 1]);
	return (0);
}
