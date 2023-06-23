#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * _strlen - gets length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
	{
		l++;
	}
	return (l);
}
/**
 * _strcpy - copies src to dest
 * @dest: destination of copy
 * @src: string to be copied
 * Return: pointer to copied string
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
/**
 * new_dog - creates a new struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *doggie;

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggie->name = malloc((strlen(name) + 1) * sizeof(char));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	doggie->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	doggie->name = _strcpy(doggie->name, name);
	doggie->age = age;
	doggie->owner = _strcpy(doggie->owner, owner);
	return (doggie);
}
