#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - prints a-z 10 times
 *
 * Return: always 0 (Sucess)
 */
void print_alphabet_x10(void)
{	int a;
	int b;
	b = 0;

	while (b < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			{
				_putchar(a);
			}
		_putchar('\n');
		b++;
			
	}
}
