#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password for 101crackme file
 * Return: Always zero
*/

int main(void)
{
	int out;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 120;
		out += c;
		putchar(c);
	}
	putchar(2772 - out);
	return (0);
}
