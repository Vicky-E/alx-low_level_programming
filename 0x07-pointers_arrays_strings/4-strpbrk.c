#include <unistd.h>
#include "main.h"
/**
 * _strpbrk - searches for a string for any n set of bytes
 * @s: string
 * @accept: string
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
