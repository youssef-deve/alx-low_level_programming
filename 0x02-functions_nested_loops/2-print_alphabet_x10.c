#include "main.h"

/**
 * print_alphabet_x10 - utilizes _putchar to print
 * the alphabet ten times
 *
 */

void print_alphabet_x10(void)
{
	char line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
