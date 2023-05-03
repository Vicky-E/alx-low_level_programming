#include <unistd.h>
#include "main.h"
/**
 * _puts - prints string to stdout
 * @str: string to be printed out
 * Return: nothing
 */
void _puts(char *str)
{
	write(1, &*str, 1);
}
