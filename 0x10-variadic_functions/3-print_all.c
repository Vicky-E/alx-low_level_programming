#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
void pchar(va_list args);
void pstr(va_list args);
void pint(va_list args);
void pfloat(va_list args);
void print_all(const char * const format, ...);

/**
 * pchar - prints specifier c
 * @args: list of arguments
 */
void pchar(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	printf("%c", ch);
}
/**
 * pstr - prints for format s
 * @args: list of arguments
 */
void pstr(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * pint - prints integer format specifier
 * @args: list of arguments
 */
void pint(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}
/**
 * pfloat - prints specifier f
 * @args: list of arguments
 */
void pfloat(va_list args)
{
	float dec;

	dec = va_arg(args, double);
	printf("%f", dec);
}
/**
 * print_all - prints for various specifiers
 * @format: character string
 * @...: unknown number of arguments to be printed
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0, y = 0;
	char *s = "";
	printer func[] = {

		{"c", pchar},
		{"s", pstr},
		{"i", pint},
		{"f", pfloat}
	};
	va_start(args, format);
	while (format && (*(format + y)))
	{
		x = 0;
		while (x < 4 && ((*(format + y)) != *func[x].sym))
			x++;
		if (x < 4)
		{
			printf("%s", s);
			func[x].print(args);
			s = ", ";
		}
		y++;
	}
	printf("\n");
	va_end(args);
}
