#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{int a;
int hex[] = {0,1,2,3,4,5,6,7,8,9};
char x;
for (a = 0; a <= 9; a++)
putchar( '0' + hex[a]);
for (x = 'a'; x <= 'f'; x++)
putchar(x);

putchar('\n');
return (0);
}
