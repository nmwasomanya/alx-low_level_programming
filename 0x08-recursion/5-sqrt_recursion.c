#include "main.h"

/**_sqrt_recursion - finds square root
 * @n: input number
 *
 * Return: sqrt or -1 if no sqrt found
 */

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
	return (0);
}
