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
		_putchar(a + '0');
	}
	else if(a < 0)
	{	a = -1 * a;
		_putchar(a + '0');
	}
	
	return (0);
}
