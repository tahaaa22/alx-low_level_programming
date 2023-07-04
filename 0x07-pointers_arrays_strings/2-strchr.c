#include "main.h"


/**
 * *_strchr - function that locates a char in a string
 * @s: string or null
 * @c: first occurrence of the char
 * Return: pointer to the first occurrence
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return ('\0');
}
