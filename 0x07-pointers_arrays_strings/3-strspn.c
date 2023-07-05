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

	for (i = 0; accept[i] != '\0'; i++)
		for (j = i; s[j] != '\0'; j++)
			if (accept[i] == s[j])
				count++;
	return (count);
}
