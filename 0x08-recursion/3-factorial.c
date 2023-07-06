#include "main.h"


/**
 * factorial - function that returns the factorial of a given num
 * @n: number
 * Return: factorial of a num, -1 for error
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
