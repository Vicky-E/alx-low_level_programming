#include <unistd.h>
#include "main.h"
/**
 * print_rev - prints in reverse
 * @s - character to be reversed
 * Return: 0
 */
void print_rev(char *s)
{
	while (*str)
		_putchar(*str--);
	_putchar('\n');
}
