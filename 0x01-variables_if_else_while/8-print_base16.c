#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{int a;
int hex[] = {0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0xa,0xb,0xc,0xd,0xe,0xf};	
for (a = 0; a <= 15; a++)
putchar(hex);

putchar('\n');
return (0);
}
