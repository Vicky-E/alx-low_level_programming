#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Sucess)
 */
void print_alphabet(void)
{	int a;
	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
}
