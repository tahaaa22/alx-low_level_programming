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

	srand(time(NULL));
	out = rand() % 9999;
	putchar(out);
	return (0);
}
