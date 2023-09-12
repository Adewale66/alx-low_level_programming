#include "main.h"

/**
 * times_table - prints th 9 times table.
 *
 * Return: void.
 */

void times_table(void)
{
	int i, k, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			j = k * i;
			if (k == 0)
				_putchar(j + '0');
			if (k <= 9 && k != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(j + '0');
			}
			else if (j >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
