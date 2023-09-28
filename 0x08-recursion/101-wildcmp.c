#include "main.h"

/**
 * wildcmp - compares two string
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if true, 0 if false
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, ++s2));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(++s1, s2) || wildcmp(s1, ++s2));
	else if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));
	return (0);
}
