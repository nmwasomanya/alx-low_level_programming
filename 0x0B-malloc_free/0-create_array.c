#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array
 * @c: char to give
 * @size: size of the array
 * *Desc: Create an array of size "size" and assign a char c
 * Return: return to array or NULL if fail
 */

char *create_array(unsigned int size, char c)

{

	char *str;

	unsigned int x;



	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);

	for (x = 0; x < size; x++)

		str[x] = c;

	return (str);

}
