#include <stdio.h>

/**
 * main - prints the first 50 numbers in a fibonacci sequence
 * Return: 0.
 */

int main(void)
{
	int i, n = 50, x = 1, y = 2, temp;

	for (i = 0; i < n ; i++)
	{
		printf("%d, ", x);
		temp = x;

		x = y;
		y += temp;
	}
	printf("\n");
	return (0);

}
