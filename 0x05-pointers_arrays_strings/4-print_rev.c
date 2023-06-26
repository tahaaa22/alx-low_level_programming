#include "main.h"


/**
 * print_rev - prints string in reverse
 * @s: string to be printed
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i < 0)
	{
		_putchar(str[i] + 0);
		i--;
	}
}
