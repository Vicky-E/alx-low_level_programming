#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
/* betty style doc for function main goes there */
int main(void)
{       int l;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (l > 5)
	{
	 	printf("Last digit of %d %s %d %s\n", n, "is", l, "and is greater than 5");
	}
	else if (l == 0)
	{
		printf("Last digit of %d %s %d %s\n", n, "is", l, "and is 0");
	}
        else if (l < 6 && l != 0)
	{
		printf("Last digit of %d %s %d %s\n", n, "is", l, "and is less than 6 and not 0");
	}
	else
	{
	 	printf("invalid");
	}
 return (0);
}
