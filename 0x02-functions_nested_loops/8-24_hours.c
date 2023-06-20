#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int hrs, min;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + hrs / 10);
			_putchar('0' + hrs % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
		}
	}
}
