#include <unistd.h>
#include "main.h"
/**
 * _abs - computes absolute value of integer
 * @a:output
 *
 * return: Always 0 (sucess)
 */
int _abs(int)
{	int a;
	
	if (a >= 0)
	{
		_putchar(a);
	}
	else if (a < 0)
	{	a = - * a;
		_putchar(a);
	}
	else
		_putchar('0');
	return (0);
}
