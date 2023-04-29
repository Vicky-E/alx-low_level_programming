#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints natural numbers to 98
 *
 */
void print_to_98(int n)
{	while (n < 98)
	{
		printf("%d", n);
		putchar(',');
		putchar(' ');
		n++;
		
	}
	while (n > 98)
	{
		printf("%d", n);
		putchar(',');
		putchar(' ');
		n--;
	}
	if (n == 98)
		printf("%d", n);

}	       	
