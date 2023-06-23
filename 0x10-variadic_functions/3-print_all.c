#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all format
 * @format: list of parameters
 */
void print_char(va_list ag);
void print_float(va_list ag);
void print_string(va_list ag);
void print_int(va_list ag);

void print_char(va_list ag)
{
	char c;

	c = va_arg(ag, int);
	printf("%c", c);
}
void print_float(va_list ag)
{
	float dec;
	dec = va_arg(ag, double);
	printf("%f", dec);
}
void print_string(va_list ag)
{
	char *str;
	str = va_arg(ag, char*);
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}
void print_int(va_list ag)
{
	int n;

	n = va_arg(ag, int);
	printf("%d", n);
}

void print_all(const char * const format, ...)
{
}
