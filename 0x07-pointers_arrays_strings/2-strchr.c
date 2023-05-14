#include <unistd.h>
#include "main.h"
/**
 * _strchr - checks for a character in a string
 * @s: string
 * @c: character
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
 
	if (s != c)
		return (NULL);
}
