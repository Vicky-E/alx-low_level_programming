#include <unistd.h>
#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: character to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int c;
	int a;
	while (s[c++])
	{
		a++;
	}
	for (c = a - 1; c > 0; c--)
	{
		_putchar(s[c++]);
	}
	_putchar('\n');
}
