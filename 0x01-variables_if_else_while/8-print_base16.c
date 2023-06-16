#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0;
	char ch = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
