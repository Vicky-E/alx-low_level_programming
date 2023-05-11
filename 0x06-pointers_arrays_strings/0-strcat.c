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
	int i = 0, l = 0, L = 0;
	int len;

	while (dest[i])
	{
		i++;
		l++;
	}
	while (src[i])
	{
		i++;
		L++;
	}
	len = l + L;
	while (dest[len])
	{
		if (i < l)
			dest[len] = dest[i];
		else
		dest[len] = src[i];
	}
	return (dest);
}
