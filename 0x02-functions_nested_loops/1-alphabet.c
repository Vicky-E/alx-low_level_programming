#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - prints a-z
 *
 * Return: always 0 (Sucess)
 */
void print_alphabet(void)
{	int a;
	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
}
