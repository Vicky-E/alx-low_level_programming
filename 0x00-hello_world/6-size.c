#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{char char_size;
int int_size;
long int long_int;
long long int long_2int;
float float_size;
printf("size of a char: %d byte(s)\n", sizeof(char_size));
printf("size of an int: %d byte(s)\n", sizeof(int_size));
printf("size of a long int: %d byte(s)\n", sizeof(long_int));
printf("size of a long long int: %d byte(s)\n", sizeof(long_2int));
printf("size of a float: %d byte(s)\n", sizeof(float_size));
	return (0);
}
