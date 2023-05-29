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
	int i = 0;

	copy = malloc(sizeof(*str));

	if (copy == NULL || str == NULL)
		return ('\0');
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
