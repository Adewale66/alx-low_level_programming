#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: int pointer
 */

int **alloc_grid(int width, int height)
{
	int **arr = (int **) malloc(sizeof(int *) * width);
	int i = 0, j;

	if (arr == NULL)
		return (NULL);

	for (; i < width; i++)
	{
		arr[i] = (int *) malloc(height * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}

	if (width == 0 || height == 0)
		return (NULL);

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	return (arr);
}
