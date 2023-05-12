#include <unistd.h>
#include "main.h"
/**
 * _strncpy - copies string upto n byte
 * @dest: string to be copied to
 * @src:string to be copied
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != n; i++)
	{
		if (i == n)
			break;
		dest[i] = src[i];
	}
	return (dest);
}
