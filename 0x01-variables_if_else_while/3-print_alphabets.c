#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase and in uppercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char sm = 'a', ca = 'A';

	while (sm <= 'z')
	{
		putchar(sm);
		sm++;
	}

	while (ca <= 'Z')
	{
		putchar(ca);
		ca++;
	}
	putchar('\n');

	return (0);
}
