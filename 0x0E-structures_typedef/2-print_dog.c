#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age >= 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
