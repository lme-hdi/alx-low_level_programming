#include "main.h"

/**
 * _strlen_recursion - function that prints the length of the string.
 * @s: the string to be printed.
 * Return: the length of the string.
 */

int _strlen_recursion(char *s)

{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pali_checker - check if s is palindrome.
 * @s: string base address.
 * @j: the rigth index.
 * @i: the left index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */

int pali_checker(char *s, int i, int j)

{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pali_checker(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - check if s is a palindrome.
 * @s: the base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_palindrome(char *s)

{
	return (pali_checker(s, 0, _strlen_recursion(s) - 1));
}
