#include "main.h"

/**
 * puts2 - prints every other char of a string starting with first cahr only
 * @str: string in the parameter
*/

void puts2(char *str)
{
	int i = 0, n;

	while (str[i])
		i++;
	for (n = 0; n < i; n += 2)
		_putchar(str[n]);
	_putchar('\n');
}
