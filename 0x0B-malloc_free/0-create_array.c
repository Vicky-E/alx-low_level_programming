#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * create_array - creates an array of character
 * size: size of array
 * @c: character
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char s[size];
	char *p = s;

	if (size <= 0)
		return ('\0');
	s[0] = c;
	return (p);
}
