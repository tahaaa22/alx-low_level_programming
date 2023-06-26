#include "main.h"


/**
 * puts_half - prints half of a string
 * @str: string parameter
*/

void puts_half(char *str)
{
	int i = 0, n;

	while (str[i])
		i++;
	if (i % 2 == 0)
		for (n = i / 2; n < i; n++)
			_putchar(str[n]);
	else
		for (n = (i - (i - 1) / 2); n < i; n++)
			_putchar(str[n]);
	_putchar('\n');
}
