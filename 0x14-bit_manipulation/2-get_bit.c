#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * get_bit - returns bit value given index
 * @n: integer with bit value
 * @index: position of return bit
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitlen;

	bitlen = sizeof(n) * 8;
	if (index >= bitlen)
		return (-1);
	return ((n >> index) & 1);
}
