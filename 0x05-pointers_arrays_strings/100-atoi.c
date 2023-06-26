#include "main.h"

/**
 * _atoi - converting a string to an integer
 * @s: string to be converted
 * Return: Always value
*/

int _atoi(char *s)
{
	int result = 0, digit, sign = 1, i = 0;

	while (s[i])
	{
		if ((s[i] - '0') >= 0 && (s[i] - '0') <= 9)
		{
			if (s[i - 1] == '-')
			{
				sign = -1;
			}
			while ((s[i] - '0') >= 0 && (s[i] - '0') <= 9)
			{
				digit = *s - '0';
				result = result * 10 + digit;
				s++;
			}
			return (sign * result);
		}
		s++;
	}
	return (0);
};
