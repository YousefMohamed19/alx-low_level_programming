#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print numbers from 0 to 99
 *
 * Return: 0 on success
*/
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (!(i == 7 && j == 8 && k == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
