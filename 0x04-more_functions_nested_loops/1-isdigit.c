#include <unistd.h>
#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: output
 *
 * Return: on sucess 1
 */
int _isdigit(int c)
{	if (c >= 0)
		return (1);
	else if (c < 0)
		return (1);
	else
		return (0);

}
