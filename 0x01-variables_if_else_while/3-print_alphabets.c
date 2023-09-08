#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints alphabets in lowercase and uppercase
 *
 * Return: 0
 */

int main(void)
{
	for (int i = 97; i < 123; i++)
		putchar(i);
	for (int i = 65; i < 91; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
