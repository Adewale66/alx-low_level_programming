#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints dog object
 * @d: dog parameter
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		puts("");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
