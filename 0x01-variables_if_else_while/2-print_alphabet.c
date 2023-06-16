#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program excute alphabet in lowercase
 *
 * Return: Always (0) success
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
