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
		if (n > 0)
		{
			_putchar('_');
			n++;
		}
		else
			break;
	}
	_putchar('\n');
}
