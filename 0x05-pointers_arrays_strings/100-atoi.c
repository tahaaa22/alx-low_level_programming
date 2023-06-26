#include "main.h"

/**
 * _atoi - converting a string to an integer
 * @s: string to be converted
 * Return: Always value
*/

int _atoi(char *s)
{
	int result = 0, digit, sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		s++;
	}
	while (*s != '\0')
	{
		digit = *s - '0';
		result = result * 10 + digit;
		s++;
	}
	return (sign * result);
}
