#ifndef _DOG_H
#define _DOG_H
/**
 * header file
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
