#include "main.h"
#include <unistd.h>
/**
 * _islower - checks for lower case letters
 * @c: character to print
 *
 * Return: 1 (lowercase)
 * On uppercase return 0
 */
int _islower(int c)
{if (c >= 'a' &&  c <= 'z')
	return (1);
	else
		return (0);
}
