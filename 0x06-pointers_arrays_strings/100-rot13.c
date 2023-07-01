#include "main.h"


/**
 * rot13 - function encodes a string using rot 13
 * @p: pointer to char
 * Return: pointer to char after encoding
*/

char *rot13(char *p)
{
	int i = 0;
	char c1;
	char *s = p;

	while (p[i] != '\0')
	{
		int j = 0;

		while (p[j + i] >= 65 && p[i + j] <= 90 || p[i + j] >= 97 && p[i + j] <= 122)
		{
			c1 = p[i + j] - 13;
			if (p[i + j] >= 65 && p[i + j] <= 77 || p[i + j] >= 97 && p[i + j] <= 109)
			{
				p[i + j] = p[i + j] + 13;
				j++;
				continue;
			}
			p[i + j] = c1;
			j++;
		}
		i = i + j + 1;
	}
	return (s);
}
