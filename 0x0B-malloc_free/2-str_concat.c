#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - allocates concatenated string to new memory
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string or null
 */
char *str_concat(char *s1, char *s2)
{
	int length, i, ls1, ls2, j = 0, k = 0;
	char *strcat, *n, *m;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
	{
		n = malloc(strlen(s2));
		while (*s2)
		{
			n[j] = *s2;
			s2++;
			j++;
			return (n);
		}
	}
	if (s2 == NULL && s1 != NULL)
	{
		m = malloc(strlen(s1));
		while (*s1)
		{
			m[k] = *s1;
			k++;
			s1++;
			return (m);
		}
	}
	ls1 = strlen(s1);
	ls2 = strlen(s2);
	length = ls1 + ls2 + 1;
	strcat = malloc(length * sizeof(char));
	if (strcat == NULL)
		return (NULL);
	for (i = 0; i < ls1; i++)
	{
		strcat[i] = s1[i];
	}

	while (*s2)
	{
		strcat[i] = *s2;
		s2++;
		i++;
	}
	return (strcat);
}
