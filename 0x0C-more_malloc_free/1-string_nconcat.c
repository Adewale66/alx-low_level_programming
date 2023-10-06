#include <stdlib.h>
#include "main.h"


/**
 * _strlen - gets the length of a string
 * @s: string to count
 * Return: int
 */

unsigned int _strlen(char *s)
{
	unsigned int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}


/**
 * string_nconcat - concats two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i = 0, j;
	char *c;

	l1 = _strlen(s1);
	l2 = _strlen(s2);

	if (n >= l2)
		c = (char *) malloc(l1 + l2 + 1);
	else
		c = (char *) malloc(l1 + n + 1);

	if (c == NULL)
		return (NULL);
	for (; i < l1; i++)
		c[i] = s1[i];

	for (j = 0; j < n && j < l2; i++, j++)
		c[i] = s2[j];
	c[i] = '\0';
	return (c);

}
