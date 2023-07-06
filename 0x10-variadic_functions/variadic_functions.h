int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
typedef struct prints
{
	char *sym;
	void(*print)(va_list args);
}printer;
