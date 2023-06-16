#include <stdio.h>

/**
 * main - entry point
 *
 * description: alphabet lowercase and uppercase
 *
 * Return: Always (0) success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
		putchar('\n');

	return (0);
}

