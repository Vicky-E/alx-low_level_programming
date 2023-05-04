#include <unistd.h>
#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: line
 * Return: nothing
 */
void print_diagonal(int n)
{
        int m = 0;

        while (m < n)
        {
                if (n <= 0)
                        break;
                _putchar('\\');
                m++;
        }
        _putchar('\n');
}
