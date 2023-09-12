#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: The number to print up to n
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i;

	if (n > 15 || n < 0)
		return;
	for (i = 48; i < 48 + n + 1; i++)
	{
		int k, j = 0;

		for (k = 0; k < n + 1; k++)
		{
			if (j <= 9)
				_putchar(48 + j);
			else if (j <= 99)
			{
				_putchar(48 + (j / 10));
				_putchar(48 + (j % 10));
			}
			else
			{
				_putchar(48 + (j / 100));
				_putchar(48 + ((j / 10) % 10));
				_putchar(48 + (j % 10));
			}
			if (k != n)
				_putchar(44);
			if (j <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(32);
			}
			else if (j <= 99)
			{
				_putchar(32);
				_putchar(32);
			}
			else
				_putchar(32);
			j += (i - 48);
		}
		_putchar('\n');
	}
}
