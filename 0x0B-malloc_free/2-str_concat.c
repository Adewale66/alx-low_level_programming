#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: string parameter
 * @s2: string paramter
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s3 = (char *) malloc(sizeof(char *));
	int len = 0, pos = 0;

	if (s3 == NULL)
		return (NULL);

	while (s1[pos] != '\0')
	{
		s3[len] = s1[pos];
		len++;
	}
	pos = 0;
	while (s2[pos] != '\0')
	{
		s3[len] = s2[pos];
		len++;
	}
	s3[len] = '\0';
	return (s3);
}
