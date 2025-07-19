#include <stdio.h>

int	main(void)
{
	int	num[5];
	int	j, tmp;
	int	avr = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
		avr += num[i];
	}
	for (int i = 1; i < 5; i++)
	{
		tmp = num[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (tmp < num[j])
				num[j + 1] = num[j];
			else
				break;
		}
		num[j + 1] = tmp;
	}
	printf("%d\n", avr / 5);
	printf("%d\n", num[2]);
	return (0);
}
