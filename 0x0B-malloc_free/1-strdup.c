#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated memory space
 * @str: string to be copied
 * Return: pointer or null
 */
char *_strdup(char *str)
{
	char *copy;

	copy = malloc(sizeof(*str));

	if (copy == NULL || str == NULL)
		return ('\0');
	while (*str)
	{
		str++;
	}
	*copy = *str;
	return (copy);
}
