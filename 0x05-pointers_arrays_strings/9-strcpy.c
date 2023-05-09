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
	int l = 0;

	while (src[i])
	{
		*dest = *src;
		i++;
		l++;
	}
	for (i = 0; i <= (l + 1); i++)
	{
		*dest = *src;
	}
	return (dest);
}
