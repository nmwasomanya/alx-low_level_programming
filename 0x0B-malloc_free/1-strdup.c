#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates to new memory location
 * @str : a char
 * Return: Always 0
 */

char *_strdup(char *str)

{

	char *abc;
	int i, y = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	abc = malloc(sizeof(char) * (i + 1));

	if (abc == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		abc[y] = str[y];

	return (abc);
}

