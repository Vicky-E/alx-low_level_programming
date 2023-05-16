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

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
				a = 0;
			else if (s1[i] < s2[j])
				a = -1;
			else if (s1[i] > s2[j])
				a = 1;
		}
	}
	return (a);
}
