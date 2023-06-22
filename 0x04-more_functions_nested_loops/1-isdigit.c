#include "main.h"

/**
 * _isdigit - fuction that checks for digit
 *
 * @c: input of function
 *
 * Return: return 1 if 'c' a digit otherwise return 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
