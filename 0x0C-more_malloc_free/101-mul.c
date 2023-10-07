#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * valid_num - checks if a number is valid
 * @str: string
 * Return: bool;
 */

bool valid_num(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		if (str[i] < '0' || str[i] > '9')
			return (false);
	return (true);
}


/**
 * main - multiplies two postive numbers
 * @argc: args count
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *num1_str;
	char *num2_str;
	unsigned long long int res;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}
	num1_str = argv[1];
	num2_str = argv[2];

	if (!(valid_num(num1_str)) || !(valid_num(num2_str)))
	{
		puts("Error");
		exit(98);
	}

	res = atoll(num1) * atoll(num2);

	printf("%llu\n", res);

	return (0);

}
