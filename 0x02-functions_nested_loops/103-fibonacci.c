#include <stdio.h>

/**
 * main - prints the first 50 numbers in a fibonacci sequence
 * Return: 0.
 */

int main(void)
{
	int sum = 0, x = 1, y = 2;

	while (x <= 4000000)
	{
		if (x % 2 == 0)
			sum += x;
		int temp = x;

		x = y;
		y += temp;
	}
	printf("%d\n", sum);
	return (0);
}
