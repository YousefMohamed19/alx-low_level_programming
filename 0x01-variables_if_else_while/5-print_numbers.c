#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the numbers from 0-9
 *
 * Return: 0 on success
*/
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%i", x);
		x++;
	}
	printf("\n");
	return (0);
}
