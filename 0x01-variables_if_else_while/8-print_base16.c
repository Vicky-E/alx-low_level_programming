#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{char a;
for (a = 0; a <= 15; a++)
	putchar('%x',a);
putchar('\n');
return (0);
}
