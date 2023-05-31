#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes a variable
 * @d: variable
 * @name: name of dog
 * @age: age
 * @owner: owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
