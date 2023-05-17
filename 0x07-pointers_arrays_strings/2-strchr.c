#include <unistd.h>
#include "main.h"
/**
 * _strchr - checks for a character in a string
 * @s: string
 * @c: character
 * Return: character value
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s);
		}
		i++;
	}
	return (NULL);
}
