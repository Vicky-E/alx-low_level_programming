#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 * @x:output
 *
 * Return: value of x
 */

int print_last_digit(int x)
{
	x = (x % 10);

	if (x < 0)
	{
		x = (-1 * x);
		_putchar('0' + x);
	}
	else
		_putchar('0' + x);
	return (x);
}
