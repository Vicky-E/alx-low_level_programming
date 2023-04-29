#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints natural numbers to 98
 *
 */
void print_to_98(int n)
{	while (n < 99)
	{
		printf("%d\n", n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
}	       	
