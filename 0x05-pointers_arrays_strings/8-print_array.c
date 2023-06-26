#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: first pointer
 * @n: num of elements thats printed
*/

void print_array(int *a, int n)
{
	int i = 0, m;

	while (a[i])
		i++;
	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != i - 1)
			printf(", ");
	}
	_putchar('\n');
}
