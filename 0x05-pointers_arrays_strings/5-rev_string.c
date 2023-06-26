#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: dtring to be reversed
*/

void rev_string(char *s)
{
	int i = 0, n = 0;

	while (s[i])
		i++;
	char hold[i + 1];

	hold[i] = '\0';

	while (i--)
	{
		hold[n] = s[i];
		n++;
	}
	i = 0;

	while (s[i])
	{
		s[i] = hold[i];
		i++;
	}
}
