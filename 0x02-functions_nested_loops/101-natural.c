#include "main.h"
#include <stdio>

/**
 * main - check for start
 *
 * Description: computes the sum
 *
 * Return: Always 0
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num / 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sim);

	return (0);
}
