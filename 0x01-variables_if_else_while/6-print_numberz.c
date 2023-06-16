#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers with putchar
 *
 * Return: Always (0) success
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar (n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
