#include "variadic_functions.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * sum_them_all - sums up all the arguments
 * @n: integer
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, x;
	int sum = 0;

	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg,n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, int);
		sum = x + sum;
	}
	va_end(arg);
	return (sum);
}
