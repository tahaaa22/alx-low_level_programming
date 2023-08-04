#include "main.h"

/**
 * binary_to_uint - function to convert binary to int
 * @b: pointer to a string
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, i, n = 0;

	if (!b)
		return (0);
	while (b[n] != '\0')
		n++;
	for (i = 0; i < n; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum = sum + (1 << (n - 1 - i));
	}
	return (sum);
}
