#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Sucess)
 */
int _putchar(char c);
void print_alphabet(void)
{	int a;
	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
}
int main(void)
{	print_alphabet();
	_putchar('\n');
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
