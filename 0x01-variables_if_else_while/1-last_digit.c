#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{       int l;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;
	if (n > 5){
	 printf("Last digit of %d %s %d %s\n", n, "is", l, "and is greater than 5"); 
	}
	else if (n == 0){
		printf("Last digit of %d %s %d %s\n", n, "is", l, "and is zero");
	}
        else if (n < 6 && n != 0){
		printf("Last digit of %d %s %d %s\n", n, "is", l, " and is less than 6 and not 0");
	}
	else {
	 printf("invalid");
	}	 
	 return (0);
}
