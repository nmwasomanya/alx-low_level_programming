#include "main.h"

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * @x: input integer
 * Return: int
 */
int sqrt_helper(int x, int y);
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helps
 * @x: arg
 * @y: arg
 *
 * Return: the square root
 */

int sqrt_helper(int x, int y)
{
	if ((y * y) == x)
	{
		return (y);
	}
	return (sqrt_helper(x, y + 1));
}
