#include <unistd.h>
#include "main.h"
/**
 * print_line - printing a line
 * @n: line
 * Return: nothing
 */
void print_line(int n)
{
	while (n)
	{
		if (n <= 0)
			break;
		_putchar('_');
		n++;
	}
	_putchar('\n');
}
