#include "main.h"

/**
 * filp_bits - function that returns the number of bits flipped
 * @n: int to be flipped
 * @m: int to compare with
 * Return: number of how many flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, sum = 0;

	for (i = 0; i < 64; i++)
	{
		if ((n & (1UL << i)) != (m & (1UL << i)))
		{
			sum++;
			n = n | (1 << i);
		}
	}
	return (sum);
}
