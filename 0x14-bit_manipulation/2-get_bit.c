#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @n: integer to convert
 * @index: index to be printed
 * Return: value at specific index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n >> index) & 1);
}
