#include "main.h"


/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to be printed
*/

void _print_rev_recursion(char *s)
{
	if (*s++ != '\0')
	{
		_print_rev_recursion(s);
	}
	if (*s == '\0')
		return;
	printf("%c", *s);
}
