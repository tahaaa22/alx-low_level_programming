#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check it is length
 * Return: size of char
*/

int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s != '\0'; s++)
		c++;
	return (c);
}
