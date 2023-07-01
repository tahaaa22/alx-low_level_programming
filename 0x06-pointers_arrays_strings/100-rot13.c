#include "main.h"


/**
 * rot13 - encodes a string using rot 13
 * @p: pointer to char
 * Return: pointer to char after encoding
*/

char *rot13(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		int j = 0;

		while (p[j + i] >= 65 && p[i + j] <= 90 || p[i + j] >= 97 && p[i + j] <= 122)
		{
			if (p[i + j] >= 65 && p[i + j] <= 77 || p[i + j] >= 97 && p[i + j] <= 109)
				p[i + j] = p[i + j] + 13;
			else
				p[i + j] = p[i + j] - 13;
			j++;
		}
		i = i + j + 1;
	}
	return (p);
