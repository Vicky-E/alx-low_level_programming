#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * _abs - computes absolute value of integer
 * @a:output
 *
 * Return: value of a
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = -1 * a;
		return (a);
	}
	else
		return (a);
}
