#include <unistd.h>
#include "main.h"
#include <stdio.h>
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
		printf("%d\n", a);
	}
	else if(a < 0)
	{	a = -1 * a;
		printf("%d\n", a);
	}
	return (0);

}
