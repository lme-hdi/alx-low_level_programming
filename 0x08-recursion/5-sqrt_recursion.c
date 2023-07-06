
#include "main.h"

/**
 * numcheck - checks for the square root.
 * @x: integer.
 * @y: integer.
 *
 * Return: integer.
 */

int numcheck(int x, int y)

{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (numcheck(x + 1, y));
}


/**
 * _sqrt_recursion - the function that returns the
 *                   natural square root of a number.
 * @n: integer to find square of.
 * Return: a natural square root or -1.
 */

int _sqrt_recursion(int n)

{
	if (n == 0)
		return (0);
	return (numcheck(1, n));
}
