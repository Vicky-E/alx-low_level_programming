#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums up all parameters
 * @n:number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, x, sum = 0;

	if (n == 0)
		return (0);
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum = x + sum;
	}
	return (sum);
}
