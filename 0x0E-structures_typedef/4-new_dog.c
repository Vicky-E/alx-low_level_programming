#include <stdio.h>
#include <stdlib>
#include "dog.h"
/**
 * new_dog - function
 * @name: elements of struct
 * @age: element
 * @owner: element
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog_t *doggie;
	doggie = malloc(sizeof(dog_t);
	if (doggie == NULL)
		return (NULL);
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggie->name = strcopy(doggie->name,name);
	doggie->age = age;
	doggie->owner = strcopy(doggie->owner,owner);
	return (doggie);
}
