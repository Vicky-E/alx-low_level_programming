#include <unistd.h>
#include "main.h"
/**
 * _strncat - concatenates 2 strings
 * @dest:string being appended to
 * @src:string to be appended
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, l;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (l = 0; src[l] != '\0'; l++, i++)
	{
		if (l == n)
			break;
		dest[i] = src[l];
	}
	return (dest);
}
