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
	int mul, len, i, conv, index = 0;
	unsigned int uint = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);
	i = len - 1;
	while (b[index] != '\0' && i >= 0)
	{
		if  ((b[index] != '0') && (b[index] != '1'))
			return (0);
		conv = b[index] - '0';
		mul = conv << i;
		uint += mul;
		index++;
		i--;
	}
	return (uint);
}
