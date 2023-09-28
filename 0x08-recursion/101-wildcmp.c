#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: frist string
 * @s2: second string
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, ++s2));
		return (*s2 == '\0');
	}
	if (*s2 == '\0')
		return (wildcmp(++s1, s2) || wildcmp(s1, ++s2));
	else if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));
	return (0);
}
