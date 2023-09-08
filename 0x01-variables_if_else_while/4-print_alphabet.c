#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: prints leters except q amd e
 *
 *Return: Always 0
 */

int main(void)
{
	for (int i = 97; i < 123; i++)
		if (i != 101 && i != 113)
			putchar(i);
	putchar('\n');
	return (0);
}
