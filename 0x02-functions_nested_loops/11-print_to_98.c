#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * print_to_98 - prints natural numbers to 98
 *
 */
void print_to_98(int n)
{for (n < 98; n++)
	{
		printf("%d\n", n);
		putchar(',');
		putchar(' ');
		
	}
for (n > 98; n--)
	{
		printf("%d\n", n);
		putchar(',');
		putchar(' ');
}	       	
