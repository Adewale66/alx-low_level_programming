#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of ints
 * @min: min value
 * @max: max value
 * Return: int *
 */

int *array_range(int min, int max)
{
	int *a;
	int len, i = min, j;

	if (min > max)
		return (NULL);

	for (; i < max + 1; i++)
		len++;

	a = (int *) malloc(len);

	for (j = 0, i = min; i < max + 1; i++, j++)
		a[j] = i;

	return (a);

}
