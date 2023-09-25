#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: character pointer
 * @c: character
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int len = 0;
	char *f = '\0';

	while (s[len] != '\0')
	{
		if (s[len] == c)
		{
			f = s + len;
			break;
		}
		if (*f != '\0')
			break;
		len++;
	}
	return (f);
}

