#include "main.h"

/**
 * print_square - prints a square f
 *
 * @size: is the size of the square
 *
 * Return: 0 (Success)
*/

void print_square(int size)
{
	if (size <= 0)
	_putchar('\n');
	else
	{
		int row, col;

		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
