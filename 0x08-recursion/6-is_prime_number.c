#include "main.h"

/**
 * numcheck - checks to see if number is prime.
 * @x: int
 * @y: int
 * Return: an integer.
 */

int numcheck(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (numcheck(x + 1, y));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *                   otherwise return 0.
 * @n: num to evaluate.
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (numcheck(2, n));
}
