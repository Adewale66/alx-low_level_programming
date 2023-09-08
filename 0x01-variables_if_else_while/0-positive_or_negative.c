#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Description: To check if a number is positive or negative
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is postive\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
