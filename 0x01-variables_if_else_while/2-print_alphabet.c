#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print al alphabet in order
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
