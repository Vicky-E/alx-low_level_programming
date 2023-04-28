#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 * @x:output
 *
 * return: on sucess 0
 * on error -1
 */
void last_digit();
int print_last_digit(int x)
{
	x = last_digit();
	_putchar(x);
	return (0);
}
void last_digit()
{int a,b;
	b = a % 10;
}
