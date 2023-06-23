#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
*/

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int h, b;

		for (h = 1; h <= size; h++)
		{
			for (b = 1; base <= h; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
