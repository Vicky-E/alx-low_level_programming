#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * binary_to_uint - coverts binary to unsigned integer
 * @b: binary character string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int mul,len, i, uint = 0;
	int index = 0;

	len = strlen(b);
	i = len;
	if (b == NULL)
		return(0);
	while (len >= 0)
	{
		if  (b[index] >= 1)
			return(0);
		mul = b[index] * len;
		uint += mul;
		index++;
		len--;
	}
	return(uint);
}
