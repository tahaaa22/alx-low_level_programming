#include "main.h"


/**
 * _strpbrk - function that serches a string for any of a set of bytes
 * @s: main string
 * @accept: string to check from
 * Return: pointer to the byte in s tha matches in accept
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
