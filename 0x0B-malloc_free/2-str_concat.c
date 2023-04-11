#include "main.h"
#include <stdlib.h>

/**
 * str_concat - adds the input together
 * @a1: input one to concat
 * @a2: second input to join
 * Return: Always 0
 */

char *str_concat(char *a1, char *a2)
		
{
		
	char *conct;
		
	int r, bi;
		
	if (a1 == NULL)
		a1 = "";
	if (a2 == NULL)
		a2 = "";
	r = bi = 0;
		
	while (a1[r] != '\0')
		r++;
	while (a2[bi] != '\0')
		bi++;

	conct = malloc(sizeof(char) * (r + bi + 1));
	
	if (conct == NULL)
		return (NULL);
		
	r = bi = 0;
		
	while (a1[r] != '\0')
	{
		conct[r] = a1[r];
		r++;
	}
	while (a2[bi] != '\0')
	{
		conct[r] = a2[bi];
		r++, bi++;
	}
		
	conct[r] = '\0';
		
	return (conct);
		
}
