#include "main.h"

/**
 * _putchar - function to print string
 * @c: char to printed
 * Return: return 1 for success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
