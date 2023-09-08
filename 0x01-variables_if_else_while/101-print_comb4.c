#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of three digits.
 *
 * Return: 0
 *
 */

int main(void)
{
	for (int i = 48; i < 56; i++)
		for (int j = i + 1; j < 57; j++)
			for (int k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
					putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
