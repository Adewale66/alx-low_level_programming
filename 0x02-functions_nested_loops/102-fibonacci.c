#include <stdio.h>

/**
 * main - prints the first 50 numbers in a fibonacci sequence
 * Return: 0.
 */

int main(void)
{
	int i, n = 50, x = 1, y = 2;

	for (i = 0; i < n ; i++)
	{
		printf("%d, ", x);
		int temp = x;

		x = y;
		y += temp;
	}
	printf("\n");
	return (0);

}
