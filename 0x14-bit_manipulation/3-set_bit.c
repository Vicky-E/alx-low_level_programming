#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * set_bit - sets indeed value to 1
 * @n: integer with index
 * @index: position of value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitlen, bit;

	bitlen = (sizeof(n)) * 8;
	if (index >= bitlen)
		return (-1);
	bit = (*n >> index);
	*n  = bit || 1;
	return (1);
}
