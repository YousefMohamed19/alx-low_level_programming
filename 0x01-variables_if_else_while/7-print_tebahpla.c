#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in reverse.
 *
 * Return: 0 on success
*/
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
