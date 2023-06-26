#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: termination null nyte
 * @src: string to be copied
 * Return: always char
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
