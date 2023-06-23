#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
*/

void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (h = 1; h <= size; h++)
	{
		for (b = 1; b <= h; b++)
			_putchar('#');
		_putchar('\n');
	}
}
