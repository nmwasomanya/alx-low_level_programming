#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	int i = 0;
	char *dest;

	if (str == NULL)
		return (NULL);

	dest = (char *)malloc((strlen(str) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

