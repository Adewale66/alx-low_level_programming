#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints n to 98
 * @n: The number to start from
 *
 * Return: void.
 */

void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d", n);
		_putchar(44);
		_putchar(32);
		n++;
	}
}
