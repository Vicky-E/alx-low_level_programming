#include <unistd.h>
#include "main.h"
/**
 * pchar - prints _putchar
 *
 * Return: Always 0 (Sucess)
 */
int pchar()
{	int a;
	a = '_putchar';
	_putchar(a);
	_putchar('\n');
	return (0);
}
