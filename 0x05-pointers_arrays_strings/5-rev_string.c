#include <unistd.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{

	int len = 0;
	int i = 0;
	char t;

	while (s[i])
	{
		i++;
		len++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
	}
}
