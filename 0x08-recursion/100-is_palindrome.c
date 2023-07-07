#include "main.h"

/**
 * len - function to get the length
 * @s: string
 * Return: length of the string
*/

int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * helper - function to help plindrome to check from start and end
 * @s: pointer to the string
 * @start: beginning of the string
 * @end: last number
 * Return: 1 if palindrome, 0 otherwise
*/

int helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - function to check if this string is palindrome
 * @s: string
 * Return: 1 if true, 0 O.W.
*/

int is_palindrome(char *s)
{
	int length = len(s);

	if (length <= 1)
		return (1);
	return (helper(s, 0, length - 1));
}
