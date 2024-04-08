#include "search_algos.h"

/**
 * min - returns the min of two values
 * @a: int a
 * @b: int b
 * Return: a || b
 */

size_t min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

/**
 * binary_s - searches for a value using binary search
 * @array: pointer to first element
 * @size: size of the array
 * @start: start postion
 * @value: value to find
 * Return: index if found or -1;
 */

int binary_s(int *array, int start, size_t size, int value)
{

	int l = start;
	int r = size - 1;

	while (l <= r)
	{
		int mid = l + (r - l) / 2;
		int i = l;

		printf("Searching in array: ");
		for (; i < r; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[r]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value using Exponential search algorithm
 * @array: pointer to the first element
 * @size: size of the array
 * @value: value to find
 * Return: first index of value or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%li] = [%i]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%li] and [%li]\n", bound / 2, bound);

	return (binary_s(array, bound / 2, min(bound + 1, size), value));
}
