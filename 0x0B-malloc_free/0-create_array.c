#include "main.h"

/**
 * *create_array - creates ana array of chars
 * @size: sie of the array
 * @c: char to intialize
 * Return: pointer to the array inttialized
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
