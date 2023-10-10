#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 * Return: dog pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = (dog_t *) malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
