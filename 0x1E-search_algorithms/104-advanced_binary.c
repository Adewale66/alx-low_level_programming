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
	size_t i, mid = size / 2;

	if (!array)
		return (-1);
	if (size == 1)
	{
		if (array[0] == value)
			return (0);
		return (-1);
	}
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
	if (array[mid] == value)
	{
		if (array[mid - 1] < value)
			return (mid);
	}
	if (array[mid] < value)
	{
		return (mid + advanced_binary(array + mid, size - mid, value));
	}
	return (advanced_binary(array, mid + 1, value));
}
