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
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while (src[i])
	{	i++;
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
dog_t *new_dog(char *name, float age, char *owner)
{

	struct dog_t *doggie;
	doggie = malloc(sizeof(dog_t);
	if (doggie == NULL)
		return (NULL);
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggie->name = _strcopy(doggie->name,name);
	doggie->age = age;
	doggie->owner = _strcopy(doggie->owner,owner);
	return (doggie);
}
