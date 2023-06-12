#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/*
 * *_strdup - duplicates a string
 * @str: input string
 *
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *dest = (char *)malloc((strlen(str) + 1) * sizeof(char));
	int i = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	free(dest);

	return dest;
}

