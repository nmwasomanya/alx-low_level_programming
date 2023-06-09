#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * **alloc_grid - 2d array
 * @width: width of array
 * @height: height
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
