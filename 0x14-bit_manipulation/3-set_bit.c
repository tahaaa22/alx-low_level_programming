#include "main.h"

/**
 * set_bit - function that sets the value od abit to 1
 * @n: pointer to the bits
 * @index: index to be changed
 * Return: 1 for sucess
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return (git_bit(&n, index) | (1 << 2));
}
