#include <unistd.h>
#include "main.h"
/**
 * _strcat - appends one string to another
 * @dest: string to be appended to
 * @src: string to be appended
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, l;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (l = 0; src[l] != '\0'; l++, i++)
	{
		dest[i] = src[l];
	}
	return (dest);
}
