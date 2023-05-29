#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int length;

	length = strlen(str);
	copy = malloc(length + 1 * sizeof(char));

	if (copy == NULL || str == NULL)
		return ('\0');
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
