#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
<<<<<<< HEAD
typedef struct prints
{
	char *sym;
	void(*print)(va_list args);
}printer;
=======
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif
>>>>>>> 1841bd1a90aac3870c123eaf186ce6271a4cdeaa
