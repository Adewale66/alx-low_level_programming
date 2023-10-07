#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concats two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;
	char *c;

	l1 = s1 != NULL ? strlen(s1) : 0;
	l2 = s2 != NULL ? strlen(s2): 0;

	if (n >= l2)
		n = l2;

	c = (char *) malloc(sizeof(char) * (l1 + n + 1));

	if (c == NULL)
		return (NULL);
	strcpy(c, s1);
	strcat(c, s2, n);
	return (c);

}
