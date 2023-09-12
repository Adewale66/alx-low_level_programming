#include "main.h"

/**
 * times_table - prints th 9 times table.
 *
 * Return: void.
 */

void times_table(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		int k, j = 0;

		for (k = 48; k < 58; k++)
		{
			if (j <= 9)
				_putchar(48 + j);
			else
			{
				_putchar(48 + (j / 10));
				_putchar(48 + (j % 10));
			}
			_putchar(44);
			if (j <= 9)
				_putchar(32);
			_putchar(32);
			j += (i - 48);
		}
		_putchar('\n');
	}
}
