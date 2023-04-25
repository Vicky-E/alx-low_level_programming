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
	if (n > 0){
		printf("%d", n, "is positive\n");
	}
	else if (n == 0){
		printf(n, "is zero\n");
	}
	else if (n < 0){
		printf(n, "is negative %d\n");
	}
	else {
		printf(n,"is invalid\n");
	return (0);
}
