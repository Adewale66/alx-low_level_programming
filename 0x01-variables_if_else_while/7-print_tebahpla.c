#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabets backwords
 *
 * Return: 0
 */

int main(void)
{
	for (int i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
