#include "main.h"


/**
 * _puts - func that prints a string
 * @str: string to be printed
*/

void _puts(char *str)
{
	int c;

	for (c = 0; *str != '\0'; str++)
		_putchar(*str + 0);
	_putchar('\n');
}
