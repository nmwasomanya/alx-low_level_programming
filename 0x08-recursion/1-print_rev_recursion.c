#include "main.h"
#include "string.h"

void _print_rev_recursion(char *s)
{
	int len = strlen(s) - 1;
	int count = len;
	if (count == 0)
	{
		_putchar(s[0]);

		return;
	}

	_putchar(s[strlen(s) - 1]);
	count--;
	_print_rev_recursion(s + (strlen(s) - 1));
}

