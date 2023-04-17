#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints te dog struct
 * @d: dog struct
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(null)");
		printf("Age: %f\n", (d->age) ? d->age : "(null)");
		printf("Owner: %s\n", (d->owner) ? d->owner : "(null)");
	}
}