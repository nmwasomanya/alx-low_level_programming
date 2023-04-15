#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the last half
 *
 * @str: input string
 */

void puts_half(char *str)
{
	int len = strlen(str);

	if ((len % 2) == 0)
	{
		int i = len / 2;

		while (str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
	}
	else
	{
		int i = (len + 1) / 2;

		while (str[i] != '\0')
		{
			putchar(str[i]);
			i++;
		}
	}
	putchar('\n');
}

