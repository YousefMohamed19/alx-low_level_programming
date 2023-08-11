#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:  prints numbers 0-9 without using char or printf/puts,
 * and putchar 2x max
 *
 * Return: 0 on success
*/
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		i++;
	}
	putchar('\n');
	return (0);
}
