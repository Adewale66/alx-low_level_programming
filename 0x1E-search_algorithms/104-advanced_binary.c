#include "search_algos.h"

/**
 * advanced_binary - advanced binary search
 * @array: array
 * @size: size
 * @value: value
 * Return: index or -1;
 */

int advanced_binary(int *array, size_t size, int value)
{

	int l = 0;
	int r = size;

	while (l < r)
	{
		int m = floor((l + r) / 2);
		int i = l;

		printf("Searching in array: ");
		for (; i < r; i++)
		{
			printf("%i", array[i]);
			if (i != r - 1)
				printf(", ");
		}
		printf("\n");

		if (array[m] < value)
			l = m + 1;
		else
			r = m;
	}

	return (array[l] == value ? l : -1);
}
