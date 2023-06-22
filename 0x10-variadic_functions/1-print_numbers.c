#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - ...
 * @separator: ...
 * @n: ...
 * Return: ..
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int x;

	va_start(args, n);

	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
