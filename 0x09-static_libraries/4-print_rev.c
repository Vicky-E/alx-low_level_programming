#include <unistd.h>
#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: character to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int l = 0;
	int i = 0;

	while (s[i])
	{
		l++;
		i++;
	}
	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
