#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * strdup - allocates new memory to copied string
 * @str: string to be copied
 * Return: pointer on sucess else Null
 */
char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
		return (NULL);
	copy = malloc(sizeof(char) * strlen(str));
	if (copy == NULL)
		return (NULL);
	while (*str != '\0')
	{
		copy = str;
		str++;
	}
	return (copy);
}
