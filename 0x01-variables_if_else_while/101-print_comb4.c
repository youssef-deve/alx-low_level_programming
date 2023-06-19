#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that print all three different digit
 *
 * Return: Always (0) success
 */

int main(void)
{
	int x, y, w;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (w = y + 1; w <= 9; w++)
			{
				putchar('0' + x);
				putchar('0' + y);
				putchar('0' + w);
				if (x < 7 || y < 8 || w < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
