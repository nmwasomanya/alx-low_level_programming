#include "holberton.h"

/**
 * _print_rev_recursion - prints a string reverse
 *
 * @s: a string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(char *s);
		_putchar(*s);
	}
}
