#include <unistd.h>
#include "main.h"
/**
 * print_sign - checks for sign of numbe
 * @n:character to print
 *
 * Return: On sucess 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0){
		_putchar(n);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar(n);
	return (0);
}
