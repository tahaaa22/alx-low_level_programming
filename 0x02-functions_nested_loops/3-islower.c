#include "main.h"

/**
 * _islower - function to check lowercase char
 *
 * @c: char to be checked
 *
 * Return: 1 if c is lowercase and 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
