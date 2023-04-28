#include <unistd.h>
#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: output
 *
 * Return: on sucess 1
 */
int _isdigit(int c)
{	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);

}
