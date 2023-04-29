#include <unistd.h>
#include "main.h"
/** 
 * _isupper - checks for upper case
 * @c: integer
 *
 * Return: 1 for uppercase and 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);
}
