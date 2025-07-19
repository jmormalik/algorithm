#include <stdio.h>

int	main(void)
{
	int	a[3];
	int	tmp, j;
	for (int i = 0; i < 3; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i < 3; i++)
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
	printf("%d", a[1]);
	return (0);
}
