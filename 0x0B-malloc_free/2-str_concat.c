#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - concats two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to memory location with new string
 */

char *str_concat(char *s1, char *s2)
{
	int len = strlen(s1) + strlen(s2) + 1;
	char *dest = (char *)malloc(len * sizeof(char));
	int i = 0;
	int j = 0;

	if (dest == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	
	while (s2[j] != '\0')
	{
		dest[i] = s2[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
