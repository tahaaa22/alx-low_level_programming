#include "main.h"

/**
 * is_prime_recursive - checks if a number is prime recursively
 * @n: the number to check
 * @i: the divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
	if (n < 2 || n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	else
		return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime by calling is_prime_recursive
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_recursive(n, 2));
}
