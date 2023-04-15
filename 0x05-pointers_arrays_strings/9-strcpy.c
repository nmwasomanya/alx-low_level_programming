#include "main.h"

/**
 * _strcpy - copies src into dest
 * @dest: pointer to string
 * @src pointer to string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
