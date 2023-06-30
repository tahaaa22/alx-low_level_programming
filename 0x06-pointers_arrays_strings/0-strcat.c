#include "main.h"


/**
 * _strcat - function that concatenates two strings
 * @dest: first pointer
 * @src: second pointer
 * Return: pointer of type char
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, c = 0;

	while (1)
	{
		if (src[c] == '\0')
			break;
		if (dest[i] == '\0')
		{
			dest[i] = src[c];
			dest[i + 1] = '\0';
			c++;
		}
		i++;
	}
	return (dest);
}
