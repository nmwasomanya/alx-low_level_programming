#include <stdlib.h>
#include "main.h"


void *malloc_checked(unsigned int b)
{
	void *c;
	c = malloc(sizeof(b));

	if (c == NULL)
		exit(98);
	else
		return c;
}
