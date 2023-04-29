#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: On sucess 0
 */
int main(void)
{int x;
int y;

for (y = 0; y <= 9; y++)
{	
        for (x = 0; x <= 9; x++)
        {
                putchar('0' + x);
		putchar('0' + y);
                putchar(',');
                putchar(' ');

                x++;
		if (x == y)
			continue;
        }
}
        putchar('\n');
        return (0);
}
