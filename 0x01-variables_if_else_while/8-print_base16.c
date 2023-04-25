#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{int a;
for (a = '0x00'; a <= '0xff'; a++)
putchar(a);

putchar('\n');
return (0);
}
