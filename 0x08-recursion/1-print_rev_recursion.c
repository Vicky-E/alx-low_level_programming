#include <unistd.h>
#include "main.h"
/**
 * _print_rev_recursion - prnts a string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	else if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	_putchar(*s);
}
