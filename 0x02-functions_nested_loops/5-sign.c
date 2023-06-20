#include "main.h"

/**
 * print_sign - prints sign of the parameter
 *
 * @n: number to used to print it is sign
 *
 * Return: 1 if positive, 0 is zero and -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
		return ('+' + 1);
	else if (n == 0)
		return ('0' + 0);
	else
		return ('-' + 1);
}
