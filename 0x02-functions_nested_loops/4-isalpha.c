#include "main.h"

/**
 * _isalpha - function to checs for alphabetic
 *
 * @c: input of function
 *
 * Return: return (1) if there is a letter otherwise return (0)
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
