#include "main.h"

/**
 * prime_helper - is prime number
 *
 * @x: first arg
 * @y: second arg
 * Return: 1 if true or 0 if not
 */

int prime_helper(int x, int y)
{
	if (y == x)
	{
		return (1);
	}
	else if ((x % y) == 0)
	{
		return (0);
	}
	return (prime_helper(x, y + 1));
}

/**
 * is_prime_number - helps to find  if prime
 *
 * @n: num to check
 *
 * Return: 1 0r 0
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	return (prime_helper(n, 2));
}
