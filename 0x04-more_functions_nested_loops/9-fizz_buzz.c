#include <stdio.h>

/**
 * main - writes the character c to stdout
 *
 * Return: On success 0.
 */


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
