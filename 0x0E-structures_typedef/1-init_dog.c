#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function
 * @d: pointer
 * @name: name variable
 * @age:variable of type float
 * @owner: owner variable
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d ==  NULL)
	{
		return;
	}

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
