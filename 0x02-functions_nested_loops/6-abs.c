#include <unistd.h>
#include "main.h"
/**
 * _abs - computes absolute value of integer
 * @a:output
 *
 * return: Always 0 (sucess)
 */
int _abs(int a)
{
	if (a >= 0)
	{
		_putchar('48' + a);
	}
	else if(a < 0)
	{	a = -1 * a;
		_putchar('0' + a);
	}
	
	return (0);
}
