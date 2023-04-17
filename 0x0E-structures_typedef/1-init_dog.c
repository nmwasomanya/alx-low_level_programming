#include "dog.h"
#include <stdlib>

/**
 * init_dog- initializes the dog struct
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 *
 * Return: 1 if struct not given
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (1);
	(*d).name = name;
	(*d).age= age;
	(*d).owner = owner;
}
