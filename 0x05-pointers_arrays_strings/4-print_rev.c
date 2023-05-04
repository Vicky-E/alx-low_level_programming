#include <unistd.h>
#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: character to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	char c;
	while (*s)
	{
		c = *s++;
		c++;

	}
	_putchar(c--);
	_putchar('\n');
}
