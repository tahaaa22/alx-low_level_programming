#include "main.h"


/**
 * _memcpy - fuunction that copies memory area
 * @dest: memory area
 * @src: copy memory area
 * @n: number of copied bytes
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n-- > 0)
		*dest++ = *src++;
	return (start);
}
