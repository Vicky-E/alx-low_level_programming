#include <unistd.h>
#include "main.h"
/**
 * print_rev - prints in reverse
 * @s - character to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	while (*s++)
		_putchar(*s--);
	_putchar('\n');
}
