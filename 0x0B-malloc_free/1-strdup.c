#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * _strdup - allocates new memory to copied string
 * @str: string to be copied
 * Return: pointer on sucess else Null
 */
char *_strdup(char *str)
{
	char *copy;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		i++;
		str++;
	}
	copy = malloc(sizeof(char) * i + 1);
	if (copy == NULL)
		return (NULL);
	while (*str != '\0')
	{
		copy = str;
		str++;
	}
	return (copy);
}
