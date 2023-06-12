#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array
 * @size: size of array
 * @c: arg char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (sizeof(arr) == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
