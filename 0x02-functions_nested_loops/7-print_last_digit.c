#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 * @x:output
 *
 * return: on sucess 0
 * on error -1
 */

int print_last_digit(int x)
{
	x =((x % 10) + '0');
	return(write(1, &x, len(x)));
}
	
