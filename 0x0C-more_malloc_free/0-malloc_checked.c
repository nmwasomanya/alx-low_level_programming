#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - creates memory allocation
 * @b: input b
 * Return: returns c
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}
