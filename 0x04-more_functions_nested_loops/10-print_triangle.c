#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: 0 (Success)
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
			for (b = 1; base <= size; b++)
			{
				if ((h + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
