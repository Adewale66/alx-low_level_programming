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
	int len = 0;

	if (s3 == NULL)
		return (NULL);

	while (s1[len] != '\0')
	{
		s3[len] = s1[len];
		len++;
	}
	while (s2[len] != '\0')
	{
		s3[len] = s2[len];
		len++;
	}
	s3[len] = '\0';
	return (s3);
}
