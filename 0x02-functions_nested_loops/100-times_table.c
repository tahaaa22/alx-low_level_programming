#include "main.h"

/**
 * print_times_table - function that printsn times table
 *
 * @n: number of times to print
*/

void print_times_table(int n)
{
	int x, min, prod;
	for (x = 0; x <= n; x++)
	{
		_putchar('0');
		for (min = 1; min <= n; min++)
		{
			_putchar(',');
			_putchar(' ');

			prod = x * min;

			if (n > 15 && n < 0)
				_putchar(' ');
			else
				_putchar(prod + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
