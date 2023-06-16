#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program prints alphabet whitout specific caracter
 *
 * Return: always (0) success
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

