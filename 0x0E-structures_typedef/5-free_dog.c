#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees struct dog
 * @dog_t: struct
 * @d: pointer to dog
 */
void free_dog(dog_t *d)
{
	free(dog_t);
	free(d);
}
