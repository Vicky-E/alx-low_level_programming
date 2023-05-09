#include <unistd.h>
#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: string to be copied
 * @src: string
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	dest = src;

	while (src[i])
	{
		*dest = *src;
		return (dest);
		i++;
	}
}
