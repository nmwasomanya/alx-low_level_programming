#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array n times
 *
 * @a: input array
 * n: number values
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
	       	printf("%d", a[i]);
		if (i < n -1)
			printf(", ");
	       	i++;
	}
	putchar('\n');
}
