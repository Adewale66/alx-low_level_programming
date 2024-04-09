#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located, or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0;
	int index;

	if (!array)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);

	if (size == 1 && array[0] != value)
		return (-1);

	index = size / 2;
	if (array[index] == value)
	{
		if (array[index - 1] < value)
			return (index);
	}
	if (array[index] < value)
	{
		index++;
		array += index;
		if (size % 2 != 0)
			index--;
	}
	return (advanced_binary(array, size / 2, value) + index);
}
