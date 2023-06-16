#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet lowercase then uppercase
 *
 * Return: Always (0) success
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (ch <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
