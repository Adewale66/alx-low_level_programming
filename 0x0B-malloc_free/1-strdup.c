#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space in memory
 * @str: char pointer
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *t = (char *) malloc(sizeof(char *));
	int len = 0;

	if (str == NULL)
		return (NULL);

	if (t == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		t[len] = str[len];
		len++;
	}
	return (t);
}
