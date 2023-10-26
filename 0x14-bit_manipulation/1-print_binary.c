#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bitCount = 0, temp = n, i;

	if (n == 0)
		_putchar('0');

	while (temp != 0)
	{
		bitCount++;
		temp >>= 1;
	}

	for (i = bitCount - 1; i >= 0; i--)
	{
		int bit = (n >> i) & 1;

		_putchar(bit + '0');
	}
}
