#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Programme for printing the alphabet
 *
 * Return: always 0
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		putchar('\n');
		i++;
	}
	return (0);
}

