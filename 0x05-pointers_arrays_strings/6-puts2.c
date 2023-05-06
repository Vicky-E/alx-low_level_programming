#include <unistd.h>
#include "main.h"
/**
 * puts2 - prints every other line
 * @str - string to be printed
 * Return: nothing
 */
void puts2(char *str)
{
	int n = 0;
	int l = 0;

	while (str[n++])
	{
		l++;
	}
	for (n = 0; n < l; n++)
	{
		if (n % 2 == 0)
			_putchar(str[n]);
		else
			continue;
	}
	_putchar('\n');
}
