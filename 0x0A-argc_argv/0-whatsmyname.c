#include "main.h"

/**
 * whatsmyname - prints progrma name
 * @argc: integer
 * @argv: list
 * Return: always 0
*/

int whatsmyname(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
