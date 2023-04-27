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
		return (1);
		_putchar('+');
	}
	else if (n == 0){
		return (0);
		_putchar(n);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
		_putchar(n);
	return (0);
}
