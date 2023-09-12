#include <stdio.h>

/**
 * main - prints the first 98 numbers in a fibonacci sequence
 * Return: 0.
 */

int main(void)
{
	int a = 1, b = 2, x = 2;

	printf("%d, %d, ", a, b);
	while (x < 98)
	{
		int c = a + b;
		
		printf("%d, ", c);
		
		 a = b;
		 b = c;
		 x++;
	}
	printf("\n");
	return (0);
}
