#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - allocates new memory to copied string
 * @str: string to be copied
 * Return: pointer on sucess else Null
 */
char *_strdup(char *str)
{
	char *copy;
	int i = 0, length;

	if (str == NULL)
		return (NULL);
	length = strlen(str);
	copy = malloc(length + 1 * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (*str) 
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
