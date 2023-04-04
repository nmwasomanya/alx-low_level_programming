#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char x = 'a';
	chay y = 'Z';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar(\n);
}
