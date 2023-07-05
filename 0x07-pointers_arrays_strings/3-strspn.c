#include "main.h"


/**
 * _strspn - function that gets the length of a prefix substring
 * @s: char with intial segment
 * @accept: char with needed bytes only
 * Return: number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[i] == s[j])
				break;
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
