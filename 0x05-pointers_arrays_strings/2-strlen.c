#include <unistd.h>
#include "main.h"
/**
 * _strlen - prints string length
 * @s: character 
 * Return: 0
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s)
	{
		*s++;
		l++;
	}
	if (l < 10)
		_putchar((l % 10) + '0');
	else
	{
		_putchar((l / 10) + '0');
		_putchar((l % 10) + '0');
	}
	return (0);
}
