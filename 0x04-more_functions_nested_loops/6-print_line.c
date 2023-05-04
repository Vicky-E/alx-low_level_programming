#include <unistd.h>
#include "main.h"
/**
 * print_line - printing a line
 * @n: line
 * Return: nothing
 */
void print_line(int n)
{	int m = 0;

	while (m <= n)		 
	{
		if (n <= 0)
			break;
		_putchar('_');
		m++;
	}
	_putchar('\n');
}
