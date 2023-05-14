#include <unistd.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int a;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s2 == s1)
			a = 0;
		else if (s2 < s1)
			a = -1;
		else
			a = 1;
	}
	return (a);
}