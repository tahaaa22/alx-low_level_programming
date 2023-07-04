#include "main.h"


/**
 * _strchr - function that locates a char in a string
 * @s: string or null
 * @c: first occurrence of the char
 * Return: pointer to the first occurrence
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

