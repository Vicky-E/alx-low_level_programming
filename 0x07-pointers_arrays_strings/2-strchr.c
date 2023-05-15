#include <unistd.h>
#include "main.h"
/**
 * _strchr - checks for a character in a string
 * @s: string
 * @c: character
 * Return: pointer to s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			break;
		}
		s++;
	}
	return (NULL);
}