#include "main.h"

/**
 * _isalpha - checks for alphabetic characters onlu
 *
 * @c: character to be checked
 *
 * Return: 1 if c is a letter and 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
