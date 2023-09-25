#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: char pointer
 * @accept: char pointer
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int len = 0, j, f = 0;

	while (s[len] != '\0')
	{
		j = 0;

		for (; accept[j] != '\0'; j++)
		{
			if (s[len] == accept[j])
			{
				f = 1;
				break;
			}
		}
		if (f != 0)
			break;
		len++;
	}

	return (s + len);
}
