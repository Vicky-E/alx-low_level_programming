#include <unistd.h>
#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: number
 * Return: factorial
 */
int factorial (int n)
{
	if (n < 0)
		return(-1);
	else if (n == 0)
		return(0);
	n = n + factorial(n - 1);
	return (n);
}
