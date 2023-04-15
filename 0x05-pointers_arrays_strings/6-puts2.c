#include "main.h"

/**
 * puts2 - printts only values with even numbered indexes
 *
 * @str: input string
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] % 2) == 0)
		{
			putchar(str[i];
		}
		i++;
	}
}
