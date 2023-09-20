#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: char *
 */

char *cap_string(char *s)
{
	int len = 1;

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;

	while (s[len] != '\0')
	{
		int t = s[len - 1];

		if (t == 32 || t == 9 || t == 10)
		{
			if (s[len] > 96 && s[len] < 123)
				s[len] -= 32;
		}
		else if (t > 32 && t < 48)
		{
			if (s[len] > 96 && s[len] < 123)
				s[len] -= 32;
		}
		else if (t == 58 || t == 63 || t == 123 || == 125)
		{
			if (s[len] > 96 && s[len] < 123)
				s[len] -= 32;
		}
		len++;
	}

	return (s);
}
