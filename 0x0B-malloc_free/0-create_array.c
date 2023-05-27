#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * create_array - creates an array of character
 * @size: size of array
 * @c: character
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return ('\0');
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
