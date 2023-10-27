#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to a string
 *
 * Return: string length, else 0;
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_ends - checks if left and right letters are same
 * @s: string being checked
 * @left: left-most letter
 * @right: right-most letter
 *
 * Return: 1 if palindrome, else 0
 */

int compare_ends(char *s, int left, int right)
{
	if (left >= right)
		return (1);

	if (s[left] != s[right])
		return (0);

	return (compare_ends(s, left + 1, right - 1));
}

/**
 * is_palindrome - checks if a sting is palindrome
 * @s: string being checked
 *
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (compare_ends(s, 0, len - 1));
}
