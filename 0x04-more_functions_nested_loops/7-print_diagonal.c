#include "main.h"

/**
 * print_diagonal - function of diagonal
 *@n: input
 */

void print_diagonal(int n)
{
	int line1, line2;

	if (n <= 0)
		_putchar('\n');

	for (line1 = 0; line1 < n; line1++)
	{
		line2 = 0;
		for (line2 = 0; line2 < n; line2++)
		{
			if (line1 == line2)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
