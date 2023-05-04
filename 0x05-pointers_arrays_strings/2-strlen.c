#include <unistd.h>
#include "main.h"
/**
 * _strlen - prints string length
 * @s: character 
 * Return: 0
 */
int _strlen(char *s)
{
	int len;

	while (*s)
	{
		*s++;
		len++;
	}
	if (len < 10)
		_putchar((len % 10) + '0');
	else
	{
		_putchar((len / 10) + '0');
		_putchar((len % 10) + '0');
	}
	return (0);
}
