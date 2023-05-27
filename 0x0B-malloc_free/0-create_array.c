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
	char *s;
	int i;

	if (size <= 0)
		return ('\0');
	for (i = 0; i < size;)
	{
		if (i == 0)
			s[i] = 'c';
		s[i];
		i++;
	}
	return (s);
}
