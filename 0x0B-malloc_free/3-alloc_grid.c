#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - 2d array
 * @width: width of array
 * @height: height
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, **arr;
	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int *)malloc(size(int *) * width);
	
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * height);
		
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	
	return (arr);
}
