#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: print all possible combinations of single digit numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
