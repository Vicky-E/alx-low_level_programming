#include <unistd.h>
#include "main.h"
/**
 * pchar - prints _putchar
 *
 * Return: Always 0 (Sucess)
 */
int  pchar()
{	int p, u;
	p = "put";
	u = "char";
	_putchar('_');
	_putchar(p);
	_putchar(u);
	_putchar('\n');
	return (0);
}
