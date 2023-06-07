#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string to print
 */

void _puts_recursion(char *s);
{
	_putchar(*s);
	_putchar('\n');

	_puts_recursion(*(s + 1));
}
