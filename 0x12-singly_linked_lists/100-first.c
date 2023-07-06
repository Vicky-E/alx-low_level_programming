#include <stdio.h>
#include <stdlib.h>
/**
 * c - prints befrore main function
 */
void __attribute__((constructor)) c(void);
void c(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my
			house upon my back!\n");
}
