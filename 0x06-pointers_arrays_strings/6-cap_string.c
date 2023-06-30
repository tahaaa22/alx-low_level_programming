#include "main.h"
/**
 * isLower - wether ascii is lower case or not
 * @c: char
 * Return: 1 for true
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - whether ascii is a delimiter
 * @c: char
 * Return: 1 for true
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to capitalize
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int found = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			found = 1;
		else if (isLower(*s) && found)
		{
			*s -= 12;
			found = 0;
		}
		else
			found = 0;
		s++;
	}
	return (ptr);
}
