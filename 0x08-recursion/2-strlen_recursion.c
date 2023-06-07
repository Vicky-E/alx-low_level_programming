#include <unistd.h>
#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	i++;
	s++;
	return (i + _strlen_recursion(s));
}
