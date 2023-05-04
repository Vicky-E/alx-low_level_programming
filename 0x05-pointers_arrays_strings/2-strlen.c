#include <unistd.h>
#include "main.h"
/**
 * _strlen - prints string length
 * @s - character 
 * Return: 0
 */
int _strlen(char *s)
{	int len;

	while (*s)
	{
		*s++;
		len++;
	}
	return (len);
}
