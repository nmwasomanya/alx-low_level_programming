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
	char *arr = (char *)malloc(sizeof(char) * size);
	
	if (sizeof(arr) == 0)
	{
		return (NULL);
	}
	arr[0] = c;
	
	return (arr);
}
	
