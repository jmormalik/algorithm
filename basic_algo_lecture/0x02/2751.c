#include <stdio.h>

int	main(void)
{
	int	tmp, j, n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i < n; i++)
	{
		tmp = a[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j] > tmp)
			{
				a[j + 1] = a[j];
			}
			else
				break;
		}
		a[j + 1] = tmp;
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", a[i]);
	return (0);
}
