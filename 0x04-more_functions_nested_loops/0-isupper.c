#include "main.h"

/**
 * _isupper - check if c is upper
 *
 * @c: input for alpha
 *
 * Return: 1 if it is uppercase, 0 of not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
