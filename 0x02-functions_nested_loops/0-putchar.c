#include <unistd.h>

/**
 * pchar - prints _putchar
 *
 * Return: Always 0 (Sucess)
 */
int pchar()
{	char a;
	a = "_putchar";
	_putchar(a);
	return (0);
}
