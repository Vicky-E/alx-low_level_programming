#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5){
	 printf("last digit of %zu\n", n, "and is greater than 5"); 
	}
	else if (n == 0){
		printf("last digit of %d\n", n, "and is zero");
	}
        else if (n < 6 && n != 0){
		printf("last digit of %d\n", n, "is less than 6 and not 0");
	}
	else {
	 printf("invalid")
	}	 
	 return (0);
}