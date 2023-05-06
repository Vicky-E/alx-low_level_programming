#include <unistd.h>
#include "main.h"
/**
 * puts_half - prints last half of a string
 * @str: string to be printed
 * Return: nothing
 */
void puts_half(char *str)
{
	int l = 0;
	int i = 0;

	while (str[i++])
	{
		l++;
	}
	if (l % 2 == 0)
	{
		for (i = (l / 2); i < l;i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (((l - 1) / 2) + 1); i < l; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
