#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *
 *
 */

void jack_bauer(void)
{
	int hours, seconds;

	for (hours = 0; hours < 24; hours++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
		}
	}
}
