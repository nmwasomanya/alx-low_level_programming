#include "main.h"

/**
 *  _strlen - to get the length
 *
 *  @s: char input
 *  Return: count
 */

int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
