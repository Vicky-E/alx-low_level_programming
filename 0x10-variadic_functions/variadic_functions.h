#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
#include <stdarg.h>
/**
 * struct p - printer
 * @sym: represents data type
 * @print: functioner pointer to a function that prints a data type corresponding to sym
 */
typedef struct p
{
	char *sym;
	void (*print)(va_list args);
} printer;

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
