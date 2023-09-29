#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * print_binary - prints binary equivalent of n
 * @n: int to be converted
 */
void print_binary(unsigned long int n)
{
	int i, bin, bitlen, sigbit = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bitlen = (sizeof(n)) * 8;
	for (i = bitlen - 1; i >= 0; i--)
	{
		bin = n >> i;
		if (bin & 1)
		{
			_putchar('1');
			sigbit = 1;
		}
		else if (sigbit)
			_putchar('0');
	}
}
