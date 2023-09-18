#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 * Return: int
 */


int _atoi(char *s)
{
	int sign = 1;
	int base = 0;
	int i = 0;

	while (s[i] == ' ')
		i++;

	if (s[i] == '-' || s[i] == '+')
		sign = 1 - 2 * (s[i++] == '-');

	while (s[i] > '0' && s[i] <= '9')
	{
		if (base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		base = 10 * base + (s[i++] - '0');
	}
	return (base * sign);
}
