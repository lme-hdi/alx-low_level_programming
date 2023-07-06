#include "main.h"

/**
 * factorial - the function that calculate the factorial of an integer.
 * @n: the int to return the factorial from.
 * Return: factorial of n.
 */

int factorial(int n)
{

	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
			return (x);


}
