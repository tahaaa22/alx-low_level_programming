#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: first pointer
 * @src: second pointer
 * @n: number of bytes from src
 * Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, c = 0, m = 0;

	while (src[m])
		m++;
	while (1)
	{
		if (c == n || c == m)
			break;
		if (dest[i]  == '\0')
		{
			dest[i] = src[c];
			dest [i + 1] = '\0';
			c++;
		}
		i++;
	}
	return (dest);
}
