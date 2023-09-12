#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number parameter
 *
 * Return: int.
 */

int print_last_digit(int n)
{
	_putchar(48 + (n % 10));
	return (n % 10);
}
