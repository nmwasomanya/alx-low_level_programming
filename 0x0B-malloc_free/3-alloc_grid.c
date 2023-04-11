#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop that makes grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
*/

int **alloc_grid(int width, int height)
{
	int **aaa;
	int a, b;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	aaa = malloc(sizeof(int *) * height);
	if (aaa == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		aaa[a] = malloc(sizeof(int) * width);
		if (aaa[a] == NULL)
		{
			for (; a >= 0; a--)
				free(aaa[a]);
			free(aaa);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			aaa[a][b] = 0;
	}
	return (aaa);
}
