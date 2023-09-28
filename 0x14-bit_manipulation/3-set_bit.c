#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 *
 *
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitlen, bit;

	bitlen = sizeof(n) * 8;
	if (index >= bitlen)
		return (-1);
	bit = (*n >> index);
	bit = bit || 1;
	return (1);
}
