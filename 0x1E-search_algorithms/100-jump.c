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
 * jump_search - searches for a value using Jump search algorithm
 * @array: pointer to the first element
 * @size: size of the array
 * @value: value to find
 * Return: index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{

	size_t a = 0;
	size_t b = sqrt(size);

	while (array[min(b, size) - 1] < value)
	{
		printf("%li\n", a);
		a = b;
		b += sqrt(size);

		if (a >= size)
			return (-1);
	}

	while (array[a] < value)
	{
		a++;
		if (a == min(b, size))
			return (-1);
	}

	if (array[a] == value)
		return (a);
	return (-1);
}
