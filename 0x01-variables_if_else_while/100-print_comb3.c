#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: 0
 *
 */

int main(void)
{
	for (int i = 48; i < 58; i++)
		for (int j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
				putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
