#include <unistd.h>
#include "main.h"
/**
 * print_numbers - prints from 0 to 9
 *
 * Return: none
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
