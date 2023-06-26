#include "main.h"


/**
 * _puts - func that prints a string
 * @str: string to be printed
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
