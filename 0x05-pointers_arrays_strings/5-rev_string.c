#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: variable holding the string
 * Return: s
 */

void rev_string(char *s)
{
	int i;
	int j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}
}
