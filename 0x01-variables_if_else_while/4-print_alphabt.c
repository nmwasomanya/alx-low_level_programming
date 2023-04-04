#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
			x++;
		}
	}
	return (0);
}
