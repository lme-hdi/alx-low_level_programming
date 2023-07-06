
#include "main.h"

/**
 * _pow_recursion - the function that returns the value of x
 *                  raised to the power of y.
 * @x: the value to raise.
 * @y: the power.
 * Return: the result of the power.
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}

}
