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
printf("Size of a char: %lu byte(s)\n", sizeof(char_size));
printf("Size of an int: %lu byte(s)\n", sizeof(int_size));
printf("Size of a long int: %lu byte(s)\n", sizeof(long_int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long_2int));
printf("Size of a float: %lu byte(s)\n", sizeof(float_size));
	return (0);
}
