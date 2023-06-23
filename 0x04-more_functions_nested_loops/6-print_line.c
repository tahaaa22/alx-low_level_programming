#include "main.h"


/**
 * print_line - print a stright line
 *
 * @n: is the number of times the char should print
*/

void print_line(int n)
{
	int ch;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ch = 1; ch <= n; ch++)
			_putchar('_');
		_putchar('\n');
	}
}
