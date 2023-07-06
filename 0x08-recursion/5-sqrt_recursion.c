#include "main.h"

/**
 * square - helper function for sqrt
 * @m: value to get its sqrt
 * @v: returned result
 * Return:natral sqrt of m
*/

int square(int m, int v)
{
	if (v * v == m)
		return (v);
	else if (v * v < m)
		return (square(m, v + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a num
 * @n: number
 * Return: nayural square root, if n has not natural square root return -1
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
