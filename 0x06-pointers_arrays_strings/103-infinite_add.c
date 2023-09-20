#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers.
 * @n1: first string
 * @n2: second string
 * @r: buffer
 * @size_r: length
 * Return: char *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned long num;
	int count;

	num = getNum(n1) + getNum(n2);
	count = countDigits(num);

	printf("%lu and %d\n", num, count);

	if (count > size_r)
	{
		*r = '0';
		return (0);
	}


	return (r);

}


/**
 * getNum - returns string as number
 * @s: string
 * Return: int
 */

unsigned long getNum(char *s)
{
	unsigned long num = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		num = num * 10 +  (s[len] - '0');
		len++;
	}

	return (num);
}

/**
 * countDigits - gets the number of digits
 * @n: integer
 * Return: int
 */

int countDigits(unsigned long n)
{
	int count = 0;

	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
