#include <unistd.h>
#include "main.h"
/**
 * _print_rev_recursion - prnts a string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	if (s[i] != '\0')
	{
		i++;
		s++;
		_print_rev_recursion(s);
	}
	_putchar(*s);
}
