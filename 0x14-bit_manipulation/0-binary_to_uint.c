#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int n = 0, highest_power;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	highest_power = custom_pow(2, len - 1);
	len = 0;
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
			n += highest_power;
		highest_power /= 2;
		len++;
	}
	return (n);
}

/**
 * custom_pow - calculates the power of a number
 * @base: base number
 * @exponent: exponent number
 * Return: the power of the number
 */

unsigned int custom_pow(unsigned int base, unsigned int exponent)
{
	unsigned int result = 1;

	while (exponent > 0)
	{
		if (exponent & 1)
			result *= base;
		base *= base;
		exponent >>= 1;
	}
	return (result);
}
