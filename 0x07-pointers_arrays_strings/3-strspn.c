#include <unistd.h>
#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i, l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				l++;
		}
	}
	return(l);
}
