#include <unistd.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int l;
	int i;

	while (s[i++])
	{
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		*s = s[i];
	}
}
