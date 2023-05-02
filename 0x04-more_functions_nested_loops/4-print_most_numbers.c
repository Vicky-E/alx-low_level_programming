#include <unistd.h>
#include "main"
/**
 * print_most_numbers - prints most numbers
 *
 * Return - none
 */
void print_most_numbers(void)
{
	int n;

	while (n <= 9)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
