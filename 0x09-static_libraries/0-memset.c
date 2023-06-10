#include <unistd.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @n: bytes of memory
 * @b: constant byte
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
