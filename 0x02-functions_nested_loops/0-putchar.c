#include <unistd.h>
#include "main.h"
/**
 * pchar - prints _putchar
 *
 * Return: Always 0 (Sucess)
 */
int pchar()
{	char a;
	a = write(1,"_putchar", 9);

	_putchar('\n');
	return (0);
}
