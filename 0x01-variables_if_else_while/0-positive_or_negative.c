#include <stdio.h>
#include <time.h>

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
		printf("is negative");
	else if (n > 0)
		printf("is postive");
	else
		printf("is zero");
	return (0);
}
