#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 * @x:output
 *
 * return: value of x
 */

int print_last_digit(int x)
{	int n;
	x =((x % 10) + '0');

	n = size_t x;
	if(x < 0)
	{
		x = (-1 * x);
		return(write(1, &x, n));
	}
	else
		return(write(1, &x, n));
}
	
