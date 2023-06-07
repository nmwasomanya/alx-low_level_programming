#include "main.h"
#include "string.h"

/**
 *  _print_rev_recursion - prints string in reverse
 *  @s: string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);

	_putchar(*s);
}
