#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{int a;
int hex[] = {0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f};
for (a = 0; a <= 10; a++)
putchar(hex[a]);
for (a = 11; a <= 16; a++)
putchar('0' + hex[a]

putchar('\n');
return (0);
}
